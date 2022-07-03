#include<stdio.h>
int power(int a,int b)
{
    int result=1,i;
    for ( i = 1; i <= b; i++)
    {
        result = result * a;
    }
        return result;
}


int main()
{
    int base,exp,tothepower;
    printf("enter base >> ");
    scanf("%d",&base);
    printf("enter exp/power >> ");
    scanf("%d",&exp);

    tothepower = power(base,exp);
    printf("your reseult is %d^%d = %d",base,exp,tothepower);
    return 0;
}