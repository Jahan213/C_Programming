//using strcat and add two string
#include<stdio.h>
int main()
{
   /* char str1[]="Nosrat Jahan ";
    char str2[]="Mithila";
    printf("Before strcat %s\n",str1);
    strcat(str1,str2);
    printf("After strcat %s\n",str1);
    printf("After strcat %s\n",str2);//same str2*/

    //without using strcat adding two dtring

    int i=0,len=0,j=0;
    char str1[]="My name is ";
    char str2[]="Mithila";
    while(str1[i]!='\0')
    {
        i++;
        len++;
         printf("%s\n",len);
    }
    while (str2[i]!='0')
    {
        str1[len+j]=str2[j];
        j++;
    }

    printf("%s\n",str1);


}
