//read 5 number and display their sum and avg
//loop use in array
#include<stdio.h>
int main()
{
    int a[5],sum=0,i; float avg=0;
    a[0]=10;      //*if user define the value printf("enter any value = "); for(i=0;i<5;i++) scanf("%d".&a[i]);*/
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
    for(i=0;i<5;i++)
    {
        sum = sum +a[i];
       avg =sum/5;
    }
    printf("The sum is = %d\n",sum);
    printf("The average id %.2f\n",avg);
    return 0;
}
