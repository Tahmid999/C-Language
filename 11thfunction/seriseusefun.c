#include<stdio.h>
int seris(int a)
{
    if (a==1)
    {
        return 1;
    }
    else if (a==0)
    {
        return 0;
    }
    
    else
    {
        return a + seris(a-1);
    }
    
}
int main()
{
    int a,sum;
    printf("enter last n number >> ");
    scanf("%d",&a);

    sum = seris(a);
    printf("your sum is %d",sum);
    
    return 0;
}