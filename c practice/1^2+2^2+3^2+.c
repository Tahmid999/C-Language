#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the last number : ");
    scanf("%d",&n);
    printf("1^2+2^2+3^2+...+%d^2",n);
    for (int i = 1; i <= n; i++)
    {
        sum += i*i; 
    }
    printf(" = %d",sum);
    return 0;
}