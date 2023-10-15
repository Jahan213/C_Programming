//Find the sum and average of array

#include<stdio.h>
int main()
{
    int num[5],i,sum=0,sub = 0;
    float avg;
    printf("Enter any five number =");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<5;i++)
    {
        sum = sum +num[i];

        //avg = sum /5;
    }
    printf("summation is = %d\n",sum);

    printf("Average is = %.f\n",(float)sum/5);

}
