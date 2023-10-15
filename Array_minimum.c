#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("How many numbers ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("Numbers are %d\n",a[i]);
    }
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(min<a[i])
            min = a[i];
    }
    printf("Minimum value is %d\n",min);
}
