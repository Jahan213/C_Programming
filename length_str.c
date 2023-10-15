// 1st code.string length with using strlen find the length of a string
#include<stdio.h>
int main()
{
   // char str[]="Mithila";
   // int len = strlen(str);
    //printf("Length = %d\n",len);  //%d not %s because length is number not character
    //return 0;



//2nd code.without using strlen function find the length of a string
    char s1[] = "Nosrat Jahan Mithila";
    int i=0,len=0;
    while (s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d\n",len);
    return 0;
}
