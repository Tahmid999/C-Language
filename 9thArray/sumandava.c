#include<stdio.h>
int main()
{
    int n,num[100],i,sum=0;
    printf("how many number you want >> ");
    scanf("%d",&n);
    printf("enter %d number >> ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    printf("your sum is %d\n",sum);
    printf("your avg is %.2f",(float)sum/n);
    
    


    return 0;
}