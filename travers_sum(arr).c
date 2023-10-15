#include<stdio.h>
int main ()
{
    int arr[15],n,i,sum=0;
    printf ("enter how many element\n");
    scanf ("%d",&n);
    for  (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
       sum= sum + arr[i];
    }
    printf ("the sum is = %d\n",sum);
}
