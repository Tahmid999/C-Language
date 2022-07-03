#include<stdio.h>
int main()
{
    int n,n2,temp,rem,sum=0,fact=1,i,j;
    printf("enter a number : ");
    scanf("%d %d",&n,n2);
    for ( i = n; i <= n2; i++)
    {
        temp = i;
        while (temp!=0)
        {
            rem = temp%10;
            for ( j = 1; j <= rem; i++)
            {
                fact = fact *j;
            }
            
            sum = sum + fact;
            temp = temp/10;
        }
        if (sum==i)
        {
            printf("%d\n",i);
        }
    
        sum = 0;
    }
    
    return 0;
}