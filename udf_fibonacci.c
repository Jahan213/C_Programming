//UDF fibonacci
#include<stdio.h>
int fibo(int n)
{
    if(n==1||n==2)
        return 1;
    return(fibo(n-1)+fibo(n-2));
}
int main()
{
    int n,i,sum=0;
    printf("fibo series \n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum = sum+fibo(i);

    }
    printf("sum of the series is = %d\n",sum);
}

