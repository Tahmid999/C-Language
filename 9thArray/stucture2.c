#include<stdio.h>
int main()
{
    int n[4],i;
    printf("enter number >> ");
    for ( i = 0; i <=3 ; i++)
    {
        scanf("%d",&n[i]);
    }
    for ( i = 0; i <= 3; i++)
    {
        printf("\n%d",n[i]);
    }
    return 0;
}