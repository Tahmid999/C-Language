#include<stdio.h>
int main()
{
    int x,y,sum;
    int *ptr1,*ptr2;

    printf("enter x and y vlaue >> ");
    scanf("%d %d",&x,&y);

    ptr1 = &x;
    ptr2 = &y;
    sum = *ptr1 + *ptr2;

    printf("your sum is %d + %d = %d",*ptr1,*ptr2,sum);
    return 0;
}