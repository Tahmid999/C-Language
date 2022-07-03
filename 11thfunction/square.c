#include<stdio.h>

int squr(int a)
{
    return a*a;
}


int main()
{
    int num,result;
    printf("enter a number for square >> ");
    scanf("%d",&num);
    result = squr(num);
    printf("%d square is = %d",num,result);

    return 0;
}