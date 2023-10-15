#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age? = ");
    scanf("%d",&age);
    if (age<=18)
    {
        printf("you are not allow for vote\n",age);
    }
    else
    {
        printf("you are allowed for vote\n",age);
    }
    printf("you are not adult");
    return 0;

}
