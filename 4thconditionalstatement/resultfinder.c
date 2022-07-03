#include <stdio.h>
#include <conio.h>
int main()
{
    float a;
    printf("enter your number >> ");
    scanf("%f",&a);

    if (a>=80)
    {
        printf("You get A+");
    }
    else if (a>=70)
    {
        printf("You get A");
    }
    else if (a>=60)
    {
        printf("You get A-");
    }
    else if (a>=50)
    {
        printf("You get B");
    }
    else if (a>=40)
    {
        printf("You get C");
    }
    else if (a>=33)
    {
        printf("You get D");
    }
    else 
        printf("You are Fail");
    

    return 0;
}