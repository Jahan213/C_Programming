#include<stdio.h>
int main()
{
    float celcius, farenheit;
    printf("enter temperature in farenheit = ");
    scanf("%f",&farenheit);
   celcius = (farenheit-32)*5/9;
    printf("celcius %.2f =%.3f farenheit", celcius, farenheit);
    return 0;

}
