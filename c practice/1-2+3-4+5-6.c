#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("enter last number : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            even +=i;
        }
        else
            odd +=i;
        
    }
    printf("%d",odd-even);
    

    return 0;
}