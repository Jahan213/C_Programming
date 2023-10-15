//string copy means one string copy to another string(using strcpy find the copy the same 1st string to 2nd string)
#include<stdio.h>
int main()
{
    char name[]="Structured Programming";
    char copy[30];
    strcpy(copy,name); //if we copy 1st string to 2nd we write strcpy(2nd,1st);
    printf("Name of string = %s\n",name);
    printf("Copy of string = %s\n",copy);
    return 0;

}

