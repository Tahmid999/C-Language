#include<stdio.h>

int main()
{
    int n,i;
    int array[30];
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("resposta %d: %d",i+1,array[i]);
        printf("\n");
    }
    
    

    return 0;
}