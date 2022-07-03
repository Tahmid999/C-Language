#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,row,col,k,sum=0;
    printf("enter first row and first col >> ");
    scanf("%d %d",&r1,&c1);
    printf("enter second row and second col >> ");
    scanf("%d %d",&r2,&c2);

    if (c1!=r2)
    {
        printf("error !! please enter again\n");
        printf("enter first row and first col >> ");
        scanf("%d %d",&r1,&c1);
        printf("enter second row and second col >> ");
        scanf("%d %d",&r2,&c2);
    }

    // scaning for first matrix
    printf("enter numbers for first matrix >>\n");
    for ( row = 0; row < r1; row++)
    {
        for ( col = 0; col < c1; col++)
        {
            printf("enter first[%d][%d] >> ",row,col);
            scanf("%d",&first[row][col]);
        }
        printf("\n");
    }

    // scaning for second matrix
    printf("enter numbers for second matrix >>\n");
    for ( row = 0; row < r2; row++)
    {
        for ( col = 0; col < c2; col++)
        {
            printf("enter second[%d][%d] >> ",row,col);
            scanf("%d",&second[row][col]);
        }
        printf("\n");
    }


    // multplification

    for ( row = 0; row < r1; row++)
    {
        for ( col = 0; col < c2; col++)
        {
            for ( k = 0; k < c1; k++)
            {
                sum = sum + first[row][k] * second[k][col];
            }
            result[row][col] = sum;
            sum = 0;
        }
        
    }
    
    
    // printing first matrix

    printf("first >>\n");
    for ( row = 0; row < r1; row++)
    {
        for ( col = 0; col < c1; col++)
        {
            printf("%d ",first[row][col]);
        }
        printf("\n");
    }

    // printing second matrix

    printf("Second >>\n");
    for ( row = 0; row < r2; row++)
    {
        for ( col = 0; col < c2; col++)
        {
            printf("%d ",second[row][col]);
        }
        printf("\n");
    }

    // printing result matrix

    printf("result >>\n");
    for ( row = 0; row < r1; row++)
    {
        for ( col = 0; col < c2; col++)
        {
            printf("%d ",result[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}