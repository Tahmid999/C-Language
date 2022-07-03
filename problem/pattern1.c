#include<stdio.h>
int main()
{
    int n,i,j,rem,fact=1;
    scanf("%d",&n);
    
    while (n >= 1)
    {
        fact = fact * n*(n-2);
    }
    printf("%d",fact);
    
    

    return 0;
}