#include<stdio.h>
int main()
{
  int a[100] ,i,n;
  printf("enter any number = ") ;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  int max = a[0];
  for (i=0;i<n;i++)
  {
      if( max < a[i])
        max = a[i];
  }
  printf("maximum number is %d\n",max);
  return 0;

}
