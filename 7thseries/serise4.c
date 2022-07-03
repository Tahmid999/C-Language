#include<stdio.h>
int main()
{
    float num,i,sum=0;
    printf("enter number >> ");
    scanf("%f",&num);
    printf("1+1/2+...+1/%f",num);
    for (i = 1; i <= num; i=i+1)
    {
        sum = sum + (1/i);
    }
        printf(" = %f",sum);
    
    return 0;
}