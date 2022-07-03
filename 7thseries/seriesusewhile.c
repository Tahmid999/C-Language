#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    printf("enter last number >> ");
    scanf("%d",&num);
    printf("1+2+3....+%d",num);
    while (i<=num)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf(" = %d",sum);


    return 0;
}