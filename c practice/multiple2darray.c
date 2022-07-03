#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],result[10][10];
    int i,j,k,r1,r2,c1,c2,sum=0;

    printf("enter first matrix row and col : ");
    scanf("%d %d",&r1,&c1);
    printf("enter second matrix row and col : ");
    scanf("%d %d",&r2,&c2);

    while (r1!=c2)
    {
        printf("enter row and col value again that r1==c2!!\n");
        printf("enter first matrix row and col : ");
        scanf("%d %d",&r1,&c1);
        printf("enter second matrix row and col : ");
        scanf("%d %d",&r2,&c2);
    }

    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            printf("enter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("enter b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            for ( k = 0; k < c1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("\n");
    
    printf("A = ");
    for ( i = 0; i < r2; i++)
    {
        printf("\t");
        for ( j = 0; j < c2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("B = ");
    for ( i = 0; i < r2; i++)
    {
        printf("\t");
        for ( j = 0; j < c2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Result = \n");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}