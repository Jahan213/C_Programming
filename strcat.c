//with using strcat means when 1st string end 2nd string will add the last on 1st string
#include<stdio.h>
int main()
{
    char s1[]="My name is ";
    char s2[]="Mithila";
    strcat(s1 ,s2);   //Or strcat(s1,"Mithila");
    printf("Change of the string is = %s\n",s1);
    printf("Second string is = %s\n",s2);
    return 0;
}
