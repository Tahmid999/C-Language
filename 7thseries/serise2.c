#include<stdio.h>
int main()
{
    int num1,num2,i=1,j=2,sum=0;
    printf("enter two numbers >> ");
    scanf("%d %d",&num1,&num2);
    printf("1*2+2*4+3*6+...+%d*%d",num1,num2);
    while (i<=num1 && j<=num2)
    {
        sum = sum + (i*j);
        i = i +1;
        j = j + 2;
    }
    printf(" = %d",sum);
    
    return 0;
}