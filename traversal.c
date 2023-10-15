#include<stdio.h>
int main()
{
    int i,n,a[15],newindex1;
    printf("Enter how many element ");
    scanf("%d",&n);
    printf("enter elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

   printf("enter the index you want to delete \n:");
   scanf("%d",&newindex1);
   for(i=newindex1;i>=n-1;i++)
    {
        a[i]=a[i+1];
    }

    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }

}
