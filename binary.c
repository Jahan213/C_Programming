//binary search code in c
#include<stdio.h>
int main()
{
    int a[100],first,last,middle,search,n,i;
    printf("Enter array element ");
    scanf("%d",&n);
    printf("Enter %d integer ",n);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

        printf("Enter search value is\n");
        scanf("%d",&search);

        first = 0;
        last = n-1;
        middle = (first + last)/2;

        while(first <= last)
        {
            if(a[middle]<search)
            {
                first = middle+1;

            }
            else if(a[middle] == search)
            {
                printf("search value has been found ",search,middle+1);
                break;
            }
            else
                last = middle-1;
            middle = (first + last)/2;

        }
        if(first>last)
        {
            printf("Not found");
        }
}
