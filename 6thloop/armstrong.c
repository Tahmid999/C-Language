#include<stdio.h>
int main()
{
    int num,sum=0,temp,rem;
    printf("enter a number >> ");
    scanf("%d",&num);
    temp = num;
    while (temp!=0)
    {
        rem = temp%10;
        sum = sum+(rem*rem*rem);
        temp = temp/10;
    }
    if (num==sum)
    {
        printf("%d this number is armstrong",num);
    }
    else
        printf("%d this number is not armstrong",num);
    

    return 0;
}