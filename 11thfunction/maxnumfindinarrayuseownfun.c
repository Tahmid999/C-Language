#include<stdio.h>
int maxnum(int x[])
{
    int i,n;
    printf("how many numbers array do you want >> ");
    scanf("%d",&n);
    printf("enter %d numbers >> ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    int max = x[0];
    for ( i = 1; i < n; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }
    
    return max;
}



int main()
{
    int num[20],large;
    
    large = maxnum(num);
    printf("your max num is = %d",large);

    return 0;
}