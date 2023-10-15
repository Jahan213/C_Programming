#include<stdio.h>
int main()
{
    int arr[10],i,n,sum=0;
    printf("Enter 10 value ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("the sum is %d",sum);
}
