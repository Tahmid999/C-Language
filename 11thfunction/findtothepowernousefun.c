#include<stdio.h>
int main()
{
    int base,exp,result=1,i;
    printf("enter base >> ");
    scanf("%d",&base);
    printf("enter exp/power >> ");
    scanf("%d",&exp);

    for ( i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    printf("Power of %d^%d is = %d",base,exp,result);
    
    return 0;
}