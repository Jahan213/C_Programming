//when user full freedom in a programme
#include<stdio.h>
int main()
{
    int i ,a[0],sum=0,n;
    float avg = 0;
    printf("How many numbers = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
        avg = sum /n;
    }
    printf("The sum is %d\n",sum);
    printf("The average is %.2f\n",avg);
    return 0;
}
