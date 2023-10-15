#include<stdio.h>
int main()
{
    int arry1[3][3]={{1,2,3},{4,5,6},{7,8,9}},arry2[3][3],i,j,sum=0;
    printf("Sum of elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
           sum=sum+arry1[i][j];
        }
        //printf("\n");
    }
    printf("%d",sum);
    /*printf("\n");
    printf("Transpose\n");
    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",arry2[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}
