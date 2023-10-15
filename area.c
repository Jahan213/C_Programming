#include<stdio.h>
#define PI 3.14
int main()
{
    float r ,area;
    printf("enter the radius of a circle = ");
    scanf("%f",&r);
    area = PI*r*r;
    printf("the area of a circle = %.3f\n",area);
    return 0;
}
