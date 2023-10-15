#include<Stdio.h>
int main()
{
    double a,b,c,Avg;
    scanf("%.1lf %.1lf%.1lf", &a, &b,&c);
    Avg = ((a*2+b*3+c*5)/(2+3+5));
    printf("MEDIA = %.1lf\n",Avg);
    return 0;
}
