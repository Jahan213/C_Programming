#include<stdio.h>
void main(){
int t,n,arr[];
scanf("%d",&n);
for(t=0;t<n;t++)
    scanf("%d",&arr[t]);
for(t=0;t<n;t+2)
printf("%d\t\n",arr[t]);
return 0;

}
