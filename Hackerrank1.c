#include<stdio.h>
int main(){
    int a,c;
    float b,d;
    scanf("%d %d",&a,&c);
    scanf("%f %f",&c,&d);
    printf("%d %d\n",(a + b),(a-b));
    //printf("%.1f\n",c + d);
    printf("%.1f %.1f\n",(c+d),(c-d));
    //printf("%.1f",c - d);
    return 0;
}
