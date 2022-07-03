#include<stdio.h>
int main()
{
    int num,sum=0,temp,rem;
    printf("enter number >> ");
    scanf("%d",&num);
    temp = num;
    while (temp!=0)
    {
        rem = temp%10;
        sum = (sum*10)+rem;
        temp = temp/10;
    }
    printf("your sum is %d",sum);
    

    return 0;
}