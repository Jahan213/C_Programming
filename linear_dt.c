#include<stdio.h>
int main(){
    int array[100],n,i,search;
    printf("Enter num of array elements : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the search value : ");
    scanf("%d",&search);

    for(i=0; i<n; i++){
    if(array[i]==search){
        printf("%d is present in location %d",search,i);
        break;
    }
    }
    if(i==n){
        printf("%d isn't present in this list",search);
    }
    return 0;

}

#include<iostream>
using namespace std;
int Linear_search(int arr[],int n,int key){  // 1 2 3456
    for(int i =0;i<=n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}                           ///Time complexity O(n)
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    cout<<Linear_search(arr,n,key);
}

