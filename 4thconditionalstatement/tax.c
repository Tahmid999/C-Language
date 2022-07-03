#include<stdio.h>
int main()
{
    int income;
    float tax = 0;

    printf("enter your encome amount >> ");
    scanf("%d",&income);

    if (income<250000)
    {
        printf("no tax include");
    }
    else if(income>=250000 || income<500000)
    {
        tax = tax + (income * 0.05);
        printf("your tax is %.2f",tax);
    }
    else if(income>=500000 || income<1000000)
    {
        tax = tax + (income * 0.10);
        printf("your tax is %.2f",tax);
    }
    else if(income>=1000000 || income<=2000000)
    {
        tax = tax + (income * 0.20);
        printf("your tax is %.2f",tax);
    }
    

    return 0;
}