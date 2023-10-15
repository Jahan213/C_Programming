//array insert
#include<stdio.h>
int main()
{
    int a[15],n,i,newindex,newvalue;
    printf("enter how many elements : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value you want to insert\n");
    scanf("%d",&newvalue);
    printf("Enter theindex you want to insert\n");
    scanf("%d",&newindex);
    for(i=n-1;i>=newindex;i--)
    {
      a[i+1]=a[i];
    }
    a[newindex]=newvalue;
    for(i=0;i<n+1;i++)
    {
        printf("%d\t",a[i]);
    }

}
