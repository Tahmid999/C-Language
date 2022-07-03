#include<stdio.h>
int main()
{
    int num[100],n,sum=0,i;
    printf("how many number do you want : ");
    scanf("%d",&n);
    printf("enter %d number : ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");

    for ( i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    printf("your sum is %d \n",sum);
    printf("your avg is %.2f",(float)sum/n);
    
    return 0;
}