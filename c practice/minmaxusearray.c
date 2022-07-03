#include<stdio.h>
int main()
{
    int num[100],n,max,min,i;
    printf("how many number do you want : ");
    scanf("%d",&n);
    printf("enter %d numbers : ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    max=num[0];
    min = num[0];
    for ( i = 1; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
        else if (min > num[i])
        {
            min = num[i];
        }
    }

    if (max==min)
    {
        printf("all numbers are same\n");
    }
    else if (max!=min)
    {
        printf("Max num is %d\n",max);
        printf("min num is %d\n",min);
    }  
    
    return 0;
}