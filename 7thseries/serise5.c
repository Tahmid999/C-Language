#include<stdio.h>
int main()
{
    int num,i,sum=1;
    printf("enter number >> ");
    scanf("%d",&num);
    printf("1X2X3...X%d",num);
    for (i = 1; i <= num; i=i+1)
    {
        sum = sum * i;
    }
        printf(" = %d",sum);
    
    return 0;
}