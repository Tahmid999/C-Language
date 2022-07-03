#include<stdio.h>
void display(int x[], int y)
{
    int i;
    for ( i = 0; i < y; i++)
    {
        printf("%d ",x[i]);
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