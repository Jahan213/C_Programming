#include<stdio.h>

int main()
{
    float r,area,pi=3.1416;
    printf("Enter the radius of circle :");
    scanf("%f",&r);
    area = pi*r*r;
    printf("print the area of circle : %.2f ",area);
    return 0;
}
