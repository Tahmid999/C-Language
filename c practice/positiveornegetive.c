#include<stdio.h>
int main()
{
    int a;
    printf("enter a number >> ");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d this number is Positive\n",a);
    }
    else if(a<0)
        printf("%d this number is negetived\n",a);
    else
        printf("this number is zero");

    return 0;
}