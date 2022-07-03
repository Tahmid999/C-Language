#include<stdio.h>
void display(int x[], int y)
{
    int i;
    int max=x[0],min=x[0];
    for ( i = 0; i < y; i++)
    {
        if (max<x[i])
        {
            max = x[i];
        }
        else if (min>x[i])
        {
            min = x[i];
        }
    }
    if (min==max)
    {
        printf("all are equal!!");
    }
    else
    {
        printf("max value is %d\n",max);
        printf("min value is %d\n",min);
    }
    
}
int main()
{
    int num[50],n,i;
    printf("how many nubmers do you want : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter %d : ",i+1);
        scanf("%d",&num[i]);
    }
    display(num,n);
    

    return 0;
}