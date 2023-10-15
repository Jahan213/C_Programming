//array traversal
#include<stdio.h>
int main()
{
    int arr[50],i,size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array\t");
    printf("\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("element of the array are\n ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
