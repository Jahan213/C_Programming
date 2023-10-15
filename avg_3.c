#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    avg = sum/3.0;
    printf("The sum = %d\n",sum);
    printf("print the avg = %.2f\n",avg);
    return 0;

}
