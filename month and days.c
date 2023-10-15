#include<stdio.h>
int main()
{
    int month,days;
    printf("Enter days :");
    scanf("%d",&days);
    month = days /30;
    days = days %30;
    printf("month = %d\n days = %d",month,days);
    return 0;
}
