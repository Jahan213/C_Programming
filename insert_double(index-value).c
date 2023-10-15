//array insertion with double value
#include<stdio.h>
int main()
{
    int a[10],i,n,newindex,newvalue,newvalue1;
    printf("Enter element number\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter new value you want to insert\t");
    scanf("%d",&newvalue);
    printf("Enter new value1 you want to insert\t");
    scanf("%d",&newvalue1);
    printf("Enter new index you want to insert\t");
    scanf("%d",&newindex);
    for(i=n-1;i>=newindex;i--)
    {
        a[i+2]=a[i];
    }
    a[newindex]=newvalue;
    a[newindex+1]=newvalue1;
    for(i=0;i<n+2;i++)
    {
        printf("%d\t",a[i]);
    }

}
