#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("enter digit : ");
    scanf("%d",&num);
    temp = num;
    while (temp!=0)
    {
        rem = temp%10;
        sum = sum * 10 + rem;
        temp = temp/10;
    }
    if (sum==num)
    {
        printf("palindrom number!");
    }
    else
        printf("not palindrom number");
    
    

    return 0;
}