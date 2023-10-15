//sum of an array
#include<stdio.h>
int sum_of_element(int *array,int n)
{
    int i=0,sum=0;
    for (i=0;i<n;i++)
    {
      sum= sum + array[i];
    }
    return sum;
}
int main()
{
    int total=0;
    int arr[10]={1,2,3,4,5,6,7,8,9};
    total = sum_of_element(arr,9);
    printf("\nsum of all array elements %d",total);
}

