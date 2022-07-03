#include<stdio.h>
int main()
{
    int num,count=0,i;
    printf("please, enter a number >> ");
    scanf("%d",&num);
    for (i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            count++;
            break;
        }
    }
        if (count==0)
        {
            printf("%d This number is prime",num);
        }
        else
            printf("%d this number is not prime",num);
        
    

    return 0;
}