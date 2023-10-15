#include<stdio.h>
int main()
{
   /* char s1[8]={'M','i','t','h','i','l','a'};
    printf("Name = %s",s1);*/
    //character wise printing
    char str[8]="Mithila";
    int i=0;

    while(str[i]!='\0')
    {
        printf("%c\n",str[i]);
       i++;
    }

}
