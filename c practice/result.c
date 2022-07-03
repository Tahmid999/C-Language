#include<stdio.h>
int main()
{
    int a;
    printf("enter your numbers >> ");
    scanf("%d",&a);

    if (a>100)
    {
        printf("total mark is 100, please enter right number");
    }
    else if (a<=100 && a>=80)
    {
        printf("you get A+");
    }
    else if (a>=70)
    {
        printf("you get A");
    }
    else if (a>=60)
    {
        printf("you get A-");
    }
    else if (a>=50)
    {
        printf("you get B");
    }
    else if (a>=40)
    {
        printf("you get c");
    }
    else if (a>=33)
    {
        printf("you get d");
    }
    else
        printf("you are fail");

    return 0;
}