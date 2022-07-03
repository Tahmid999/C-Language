#include<stdio.h>
int main()
{
    int a[10][10],transpose[10][10],i,j,row,col;
    printf("enter row and col number >> ");
    scanf("%d %d",&row,&col);

    // scanning a matrix numbers
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {   
            printf("a[%d][%d] >> ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    // transforming a matrix
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    

    // printing a matrix
    printf("\nA= \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    // printing traspose matrix
    printf("\nTranspose= \n");
    for ( i = 0; i < col; i++)
    {
        for ( j = 0; j < row; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}