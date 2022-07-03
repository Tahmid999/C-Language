#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("enter number >> ");
    scanf("%d",&n);
    printf("1-3+3-4+....+");
    for (i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            even = even + i;
        }
        else
            odd = odd +i;
    }
        printf("= %d",odd-even);
    

    return 0;
}