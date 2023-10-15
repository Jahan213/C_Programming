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
  int mini = a[0];
  for (i=0;i<n;i++)
  {
      if( mini > a[i])
        mini = a[i];
  }
  printf("minimun number is %d\n",mini);
  return 0;

}
