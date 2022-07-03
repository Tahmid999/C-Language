#include<stdio.h>
int main()
{
    int num,sum=0,temp,rem,fact,i;
    printf("enter number >> ");
    scanf("%d",&num);
    temp = num;
    while (temp!=0)
    {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <=rem; i++)
        {
            fact = fact * i;
        }
        
        sum = sum + fact;
        temp = temp/10;
    }
    if (sum==num)
    {
        printf("%d this number is strong",sum);
    }
    else
        printf("%d this number is not strong",sum);
    

    return 0;
}