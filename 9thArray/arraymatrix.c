#include<stdio.h>
int main()
{
    int a[3][4],b[4][5];
    int row,col;
    
    printf("enter value for a matrix >> \n");
    for (row = 0; row < 3; row++)
    {
        for ( col = 0; col < 4; col++)
        {
        printf("enter a[%d][%d] >> ",row,col);
        scanf("%d",&a[row][col]);
        }
        printf("\n");
    }

    printf("A= ");
    for ( row = 0; row < 3; row++)
    {
        printf("\t");
        for ( col = 0; col < 4; col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }



    printf("enter value for b matrix >> \n");
    for (row = 0; row < 4; row++)
    {
        for ( col = 0; col < 5; col++)
        {
        printf("enter b[%d][%d] >> ",row,col);
        scanf("%d",&b[row][col]);
        }
        printf("\n");
    }

    printf("B= ");
    for ( row = 0; row < 4; row++)
    {
        printf("\t");
        for ( col = 0; col < 5; col++)
        {
            printf("%d ",b[row][col]);
        }
        printf("\n");
    }
    return 0;
}