#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int row,col,numofrow,numofcol;

    // scan for row and col
    printf("how many rows and cols you need >> ");
    scanf("%d %d",&numofrow,&numofcol);

    // scan for a matrix
    printf("enter numbers for a matrix >> \n");
    for ( row = 0; row < numofrow; row++)
    {
        for ( col = 0; col < numofcol; col++)
        {
            printf("enter a[%d][%d] >> ",row,col);
            scanf("%d",&a[row][col]);
        }
        printf("\n");
    }

    // scan for b matrix
    printf("enter numbers for b matrix >> \n");
    for ( row = 0; row < numofrow; row++)
    {
        for ( col = 0; col < numofcol; col++)
        {
            printf("enter b[%d][%d] >> ",row,col);
            scanf("%d",&b[row][col]);
        }
            printf("\n");
    }
    
    // printing a matrix
    printf("A = ");
    for ( row = 0; row < numofrow; row++)
    {
        printf("\t");
        for ( col = 0; col < numofcol; col++)
        {
            printf("%d ",a[row][col]);
        }
       printf("\n"); 
    }

    // printing b matrix
    printf("\nB = ");
    for ( row = 0; row < numofrow; row++)
    {
        printf("\t");
        for ( col = 0; col < numofcol; col++)
        {
            printf("%d ",b[row][col]);
        }
       printf("\n"); 
    }

    // adding a + b =c
    for ( row = 0; row < numofrow; row++)
    {
        for ( col = 0; col < numofcol; col++)
        {
            c[row][col] = a[row][col] + b[row][col];
        }
       printf("\n"); 
    }

    // printing a+b= c
    printf("A+B = ");
    for ( row = 0; row < numofrow; row++)
    {
        printf("\t");
        for ( col = 0; col < numofcol; col++)
        {
            printf("%d ",c[row][col]);
        }
       printf("\n"); 
    }

    return 0;
}