#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("enter number >> ");
    scanf("%d",&num);
    printf("1^2+2^2+...+%d*%d",num,num);
    for (i = 1; i <= num; i=i+1)
    {
        sum = sum + i*i;
    }
        printf(" = %d",sum);
    
    return 0;
}