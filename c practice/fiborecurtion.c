#include<stdio.h>
int fact(int y)
{

    if (y==0 || y==1)
    {
        return 1;
    }
    else
        return y * fact(y-1);
}
int main()
{
    int n,result;
    printf("enter nth value : ");
    scanf("%d",&n);
    result = fact(n);
    printf("fact is : %d",result);


    return 0;
}