#include<stdio.h>
int main()
{
    int num1,num2;
    printf("input two number are = ");
    scanf("%d%d",&num1,&num2);
    if(num1!=num2)
    {
        printf("Two numbers are not equal\n ");
    }
    else if(num1>num2)
    {
        printf("num1 is greater then num2\n");
    }
    else if(num1<num2)
    {
        printf("num2 is greater then num1\n");
    }

    else
    {
        printf("Print else if\n");
    }
    return 0;
}
