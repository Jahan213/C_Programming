 #include<stdio.h>
main()
{
int a[10],i,newvalue;
printf("Enter 5 elements") ;
for(i=0;i<5;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("Value if i = %d",a[i]);

 printf("new value u want to insert");
 scanf("%d",&newvalue);
  a[i]=newvalue;
 for(i=0;i<5+1;i++)
 {
     printf("%d",a[i]);
 }

}
