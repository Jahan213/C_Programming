//traversal or array
#include<stdio.h>
int main()
{
    int a[15],i,n;
    printf("How many elements : ");
    scanf("%d",&n);
    printf("Enter the elements of the array\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }


}
