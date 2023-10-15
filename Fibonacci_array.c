//Find the fibonacci series
/*fibo=first+second
first=second;
second=fibo;*/
#include<stdio.h>
int main()
{
   /* int n,i,array[30];
    printf("Enter the number\n ");
    scanf("%d",&n);
    array[0]=0;
    array[1]=1;
    for(i=2;i<n;i++)
    {
        array[i]=array[i-1]+array[i-2];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
    getch();*/
    int n,i,num[30];
    printf("How many fibonacci numbers ");
    scanf("%d",&n);
    num[0]=0;
    num[1]=1;
    for(i=2;i<n;i++)
    {
        num[i]=num[i-1]+num[i-2];

    }printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
}
