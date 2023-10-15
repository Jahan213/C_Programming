#include<stdio.h>
int main(){

  int i,j,n,count;

  scanf("%d",&n);

  count=0;
  for(i=0;i<n;i++){
                               //O(n2)
    for(j=0;j<n;j++){
        count=count+1;
    }
  }

  for(i=0;i<n;i++){
                                 //O(n)
    count=count+1;               //O(n+n2)=O(n)
  }
  printf("count=%d\n",count);
  return 0;
}
