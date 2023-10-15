#include<stdio.h>
int stack[5],choice,top,i,x;
void push(void);
void pop(void);
void display(void);

 int main()
 {
     top=-1;
     printf("\nStack [Max=5]:");
     printf("\n\t Stack oparation Using Array ");
     printf("\n\t-------------------------");
     printf("\n\t 1.PUSH \n\t 2. POP\n\t 3.DISPLAY\n\t 4.EXIT");

     for(;;){
        printf("\nEnter the choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

        {
            push();
            break;
        }
            case 2:
            {
             Pop();
            break;

        }

        case 3:
        {
        Display();
        break;
        }



        case 4:

        {
        printf("\nNot Point");
        Exit();
        break;
        }

            default:
            {
                printf("\n\t please enter a valid choice 1\2\3\4");
            }
            return 0;

        }
     }
 }
 void Push()
 {
     if(top>=5-1)
     {
         printf("stack is overflow");

     }
     else
     {
         printf("Enter a value to be pushed");
         scanf("%d",&x);
         top++;
         stack[top]=x;
     }
 }
 void POp()
 {
     if(top<=-1)
     {
         printf("\n stack is underflow");
     }
     else{
        printf("\nEnter the popped value is %d",stack[top]);
        top--;
     }
 }
 void Display()
 {
     if(top>=0)
     {
         printf("\n The elements in stack\n");
         for( i=top;i>=0;i--)
         printf("%d",stack[i]);
         printf("\nPress next choice");

     }
     else
        printf("\nStack is empty");

 }
