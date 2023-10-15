//compile time array initialization
//data type array name array size[];

#include<stdio.h>
int main ()
{
    int num[5],sum=0;
    num[0]= 10;
    num[1]= 20;
    num[2]= 30;
    num[3]= 40;
    num[4]= 50;
    sum = num[0]+num[1]+num[2]+num[3]+num[4];
    printf("%d\n",sum);
    return 0;
}
