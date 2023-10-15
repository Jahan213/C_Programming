#include<stdio.h>
int main()
{
    char str1[]="c programming";
    char str2[20];
    strcpy(str2,str1);    //copping str1 in str2..but if copy we write first str2,then str1;
    printf("string no 1 =%s\n",str1);
    printf("string no 2 =%s\n",str2);
}
