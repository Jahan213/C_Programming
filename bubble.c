//bubble sort in ascending order
#include<stdio.h>
int main()
{
    int a[100],n,c,d,swap;
    printf("Enter the number of array element ");
    scanf("%d",&n);
    printf("enter %d integer\t",n);

    for(c=0;c<n;c++)
        scanf("%d",&a[c]);

    for(c=0;c<n-1;c++)
    {
        for(d=0;d<n-c-1;d++)
        {

            if(a[d]>a[d+1])
            {
                swap = a[d];
                a[d] = a[d+1];
                a[d+1] = swap;
            }
        }
    }
    printf("sorted in ascending order\n");
    for(c=0;c<n;c++)
        printf("%d\n",a[c]);
    return 0;

}
