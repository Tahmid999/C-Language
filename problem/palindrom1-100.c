#include<stdio.h>
int main()
{
    int i,temp,rem,sum=0;
    for ( i = 1; i <= 100; i++)
    {
        temp=i;
        while (temp!=0)
        {
            rem=temp%10;
            sum= (sum *10) + rem;
            temp=temp/10;
        }
        if (sum==i)
        {
            printf("%d ",sum);
        }
        sum=0;
    }
    

    return 0;
}