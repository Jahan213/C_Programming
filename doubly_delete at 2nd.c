/*Create a Doubly linked list which can take character as input, a
fter creation write a code which can delete the second element form that linked list.
 Finally print all elements. To create the Linked list, using a loop is mandatory. */
// Nosrat Jahan Mithila
//Suin Jahan
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
  char ch;
  struct Node *next, *pre;
}node;
node *start = NULL;
node * _make(char c)
{
  node *tmp = (node *) malloc(sizeof(node));
  tmp -> ch = c;
  tmp -> next = tmp -> pre = NULL;
  return tmp;
}
void _insert(char c)
{
  node *tmp = _make(c);
  if (start == NULL)
    start = tmp;
  else
  {
    node *tt = start;
    while (tt -> next)
    {
      tt = tt -> next;
    }
    tt -> next = tmp;
    tmp -> pre = tt;
  }
}
void _delete()
{
  node *tmp = start;
  for (int i = 0; i < 1; i++)
    tmp = tmp -> next;
  start -> next = tmp -> next;
  free(tmp);
}

void _display()
{
  node *tra = start;
  while (tra)
  {
    printf("%c\n",tra -> ch);
    tra = tra -> next;
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
