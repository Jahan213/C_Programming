#include <stdio.h>

int main()
{
    // declaring variable and take element information
    int i, c, d, swap, min, max, middle, searchValue, searchIndex,n;
    printf("How Many Index do you want to add? : ");
    scanf("%d",&n);
    int array[n];


    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    // bubble shorting
    for(c=0; c<n-1; c++){
        for(d=0; d<n-c-1; d++){
            if(array[d]> array[d+1]){
                swap = array[d+1];
                array[d+1] = array[d];
                array[d] = swap;
            }
        }
    }


    // Printing the shorted data set
    for(i=0; i<n; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");

    // taking the search value from the user
    printf("Please Enter Search Value to Find the element: ");
    scanf("%d", &searchValue);

    min = 0;
    max = n-1;
    middle = (min+max)/2;
    while(min<=max){
        if(array[middle]>searchValue){
            max = middle-1;
            middle = (min+max)/2;
        }else if(array[middle]<searchValue){
            min = middle+1;
            middle = (min+max)/2;
        }else{
            searchIndex = middle;
            printf("Found The value: %d in the index of: %d",searchValue, searchIndex);
            break;
        }

    }

    printf("\n");
    // deleting and printing searched  data
    for(i=searchIndex; i<n; i++){
        array[i] = array[i+1];
    }
    printf("\n");

    //printing deleted data set
    for(i=0; i<n-1; i++){
        printf("%d\t", array[i]);
    }

    return 0;
}
