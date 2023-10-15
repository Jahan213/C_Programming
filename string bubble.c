#include <stdio.h>
#include <string.h>
int main()
{
    // declaring variable and take element information
    int i, c, d, swap, min, max, middle,searchIndex,n;
    char  searchChar;
    char str[100];

    printf("Enter a string : ");
    gets(str);
    // bubble shorting
    for(c=0; c<strlen(str)-1; c++){
        for(d=0; d<strlen(str)-c-1; d++){
            if(str[d]< str[d+1]){
                swap = str[d+1];
                str[d+1] = str[d];
                str[d] = swap;
            }
        }
    }


    // Printing the shorted data set
    printf("The shorted(descending order) string :\t");
    puts(str);

    // taking the search value from the user
    printf("Please Enter Search Char to Find that Char: ");
    scanf("%c", &searchChar);

    min = 0;
    max = strlen(str)-1;
    middle = (min+max)/2;

    while(min<=max){
        if(str[middle]<searchChar){
            max = middle-1;
            middle = (min+max)/2;
        }else if(str[middle]>searchChar){
            min = middle+1;
            middle = (min+max)/2;
        }else{
            searchIndex = middle;
            printf("Found The value: %c in the index(according to first middle that found in binary search) of: %d\n",searchChar, searchIndex);
            break;
        }

    }


    return 0;
}


