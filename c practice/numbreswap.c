#include<stdio.h>
int main()
{
    int a,b,swap;
    printf("enter two number>> ");
    scanf("%d %d",&a,&b);
    printf("your type %d %d\n",a,b);
    swap = a;
    a = b;
    b = swap;

    printf("Now it is swaped %d %d",a,b);



    return 0;
}