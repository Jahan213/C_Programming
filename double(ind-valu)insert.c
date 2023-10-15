//array insertion with double value & double index
#include<stdio.h>
int main ()
{
    int arr[15],n,i,newindex1,newindex2,newvalue1,newvalue2;
    printf ("enter how many you element\n");
    scanf ("%d",&n);
    printf("Enter array elements \n");
    for  (i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
    printf ("enter newvalue you want to insert1\t");
    scanf ("%d",&newvalue1);
    printf ("enter newvalue you want to insert2\t");
    scanf ("%d",&newvalue2);
    printf ("enter newindex you want to insert1\t");
    scanf ("%d",&newindex1);
    printf ("enter newindex you want to insert1\t");
    scanf ("%d",&newindex2);
    for (i=n-1;i>=newindex1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[newindex1]=newvalue1;
    for (i=n;i>=newindex2;i--)
    {
        arr[i+2]=arr[i];
    }
    arr[newindex2]=newvalue2;
    for (i=0;i<n+3;i++)
    {
        printf ("%d ",arr[i]);
    }
}
