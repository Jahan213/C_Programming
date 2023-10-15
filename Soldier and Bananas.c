// soldier and banana
#include<stdio.h>
int main()
{
    int k,n,w,i; // k=3 , n= 17, w=4;

    scanf("%d %d %d",&k ,&n ,&w);
    int sum = 0, total_sum = 0;

    for(i=1;i<=w;i++)  //(k,2k,3k,4k)


       {
           sum = k*i;  //3 6 9 12
          total_sum = total_sum + sum;//3 9 18 30


       }


       int borrow_amount =(total_sum-n);//(30-17)
       if(borrow_amount<=0){
        printf("0");
       }
       else{
        printf("%d",borrow_amount);
       }
}
