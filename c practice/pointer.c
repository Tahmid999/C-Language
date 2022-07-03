#include<stdio.h>
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main()
{
    int x,y;
    printf("enter x and y : ");
    scanf("%d %d",&x,&y);

    printf("x = %d and y = %d\n",x,y);

    swap(&x,&y);

    printf("x= %d and y= %d",x,y);

    return 0;
}