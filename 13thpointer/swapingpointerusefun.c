#include<stdio.h>

void swapp(int *p1 , int *p2)
{
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int x,y;

    printf("enter x and y >> ");
    scanf("%d %d",&x,&y);

    printf("before swapping x = %d and y = %d\n",x,y);

    swapp(&x,&y);

    printf("after swapping x = %d and y = %d",x,y);
    return 0;
}