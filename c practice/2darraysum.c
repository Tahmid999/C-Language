#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,nor,noc;
    printf("enter number of row and col : ");
    scanf("%d %d",&nor,&noc);

    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
            printf("enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
            printf("enter b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    

    printf("A = \n");
    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("B = \n");
    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("C = \n");
    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}