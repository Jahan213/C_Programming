#include<stdio.h>

int main()
{
   int i,j,n ;
   char name[50][60],s[60];
   printf("Enter the number of any order\n ");
   for(i=0;i<3;i++)
    scanf("%s",name[i]);
   {   for(i=0;i<3;i++){

       for(j=i+1;j<3;j++)
       {
           if (strcpy(name[i],name[j])>0)
           {
               strcpy(s,name[i]);
               strcpy(name[i],name[j]);
               strcpy(name[j],s);
           }
       }  }
   }
   printf("The stored order of name are:\n");
   for(i=0;i<3;i++)
   {
       printf("%s\n",name[i]);
   }

}
