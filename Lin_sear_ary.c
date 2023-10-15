#include<stdio.h>
int main()
{
    int num[15]={10,20,30,15,38};
    int value=15,i,pos=-1;
    for(i=0;i<5;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
     if(pos==-1)
    {
        printf("position not found");
    }
    else
        printf("the position is %d",pos);
}

