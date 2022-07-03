#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the last number : ");
    scanf("%d",&n);
    printf("1+2+3+...+%d",n);
    for (int i = 1; i <= n; i++)
    {
        sum += i; 
    }
    printf(" = %d",sum);
    return 0;
}