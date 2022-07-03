#include<stdio.h>
int main()
{
    int n,num[100],i;
    printf("how many numbers you want >> ");
    scanf("%d",&n);
    printf("enter %d numbers >> ",n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    

    int max = num[0];
    for ( i = 1; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    
    }
    
        printf("max number is %d\n",max);

    

    return 0;
}