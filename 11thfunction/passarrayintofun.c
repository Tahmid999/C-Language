#include<stdio.h>

void display(int x[])
{
    int i;
    int n;
    printf("how many number do you want >>");
    scanf("%d",&n);
    printf("enter %d numbers >>",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",x[i]);
    }
}

int main()
{
    int num[10];
    display(num);


    return 0;
}