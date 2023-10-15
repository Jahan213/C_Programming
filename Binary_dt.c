#include<stdio.h>
int binary_search(int a[],int n,int x);
int main(){
    int a[100],x,n,i,left,right,swap,mid;
    printf("Enter num of array elements : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
     for(i=0; i<n; i++){
       printf("sorted list id %d",a[i]);
        if(left>right){
           swap=left;
           left=right;
           right=swap;
           }
    }
    printf("Enter the search value : ");
    scanf("%d",&x);
    int result=binary_search(a,n,x);
    if(result!=-1){
        printf("searched value is found %d",result);
    }
    else{
        printf("searched value is not found" );
    }
}
int binary_search(int a[],int n,int x){
    int left,right,mid;
    left=0;
    right=n-1;

    while(left <= right){
        mid=(left + right)/2;
        if(a[mid] == x){
            return mid;
    }
    if(a[mid]<x){
        left= mid+1;
    }
    else{
        right= mid-1;
    }
}
  return 0;

}
