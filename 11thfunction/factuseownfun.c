#include<stdio.h>
int factorial(int n)
{
    int i,fact=1;
    printf("enter an int number >> ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int num,result;
    result = factorial(num);
    printf("your result is = %d",result);

    return 0;
}