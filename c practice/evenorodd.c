#include<stdio.h>
int main()
{
    int a;
    printf("enter a number >> ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d this number is even\n",a);
    }
    else
        printf("%d this number is odd",a);

    return 0;
}