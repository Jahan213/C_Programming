/*Create a Doubly linked list which can take character as input,
 after creation write a code which can delete the second element form that linked list.
 Finally print all elements. To create the Linked list, using a loop is mandatory.
*/
// Nosrat Jahan Mithila
//Suin Jahan

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  char ch;
  struct node *next, *pre;
}node;

node *head = 0;

node * _make(char c)
{
  node *temp = (node *) malloc(sizeof(node));
  temp -> ch = c;
  temp -> next = temp -> pre = 0;
  return temp;
}

void _insert(char c)
{
  node *temp = _make(c);
  if (head == 0)
    head = temp;
  else
  {
    node *newnode = head;
    while (newnode -> next)
    {
      newnode = newnode -> next;
    }
    newnode -> next = temp;
    temp -> pre = newnode;
  }
}

void _delete()
{
  node *temp = head;
  for (int i = 0; i < 1; i++)
    temp = temp -> next;
  head -> next = temp -> next;
  free(temp);
}

void _display()
{
  node *tail = head;
  while (tail)
  {
    printf("%c\n",tail -> ch);
    tail = tail-> next;
  }

}
int main()
{
  _insert('a');
  _insert('b');
  _insert('c');
  _insert('d');
  _insert('e');
  _display();
  // _delete();
  _delete();
  printf("After deletion : \n");
  _display();

}
