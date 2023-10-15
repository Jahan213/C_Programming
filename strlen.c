//using string length find the length of character
#include<stdio.h>
int main()
{
    /*char str[]="Nosrat Jahan Mithila";
    int len=strlen(str);
    printf("Length = %d\n",len);*/

    //Without using strlen function and find the strlen
    char str[]="Nosrat Mithila";
    int i=0,len =0;
    while(str[i]!='\0')
    {
        i++;
        len++;

    }
    printf("length = %d\n",len);
}
