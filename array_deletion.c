//deletion od the array
#include<stdio.h>
int main ()
{
    int a[15],n,i,newindex1,newindex2;
    printf ("enter how many elements\n");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }

    printf ("enter newindex you want to delete1\n");
    scanf ("%d",&newindex1);
     printf ("enter newindex you want to delete2\n");
    scanf ("%d",&newindex2);
    for (i=newindex1;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=newindex2-1;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    for (i=0;i<n-2;i++)
    {
        printf ("%d\t",a[i]);
    }
}
