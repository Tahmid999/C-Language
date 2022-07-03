#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    

    // scanning a matrix numbers
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter a[%d][%d] >> ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    // printing a matrix
    printf("A = \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // making diagonal numbers
    printf("Diagonal Numbers are >> ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i==j)
            {
                printf("%d ",a[i][j]);
                sum = sum + a[i][j];
            }  
        } 
    }
    
    // printing diagonal sum
    printf("\nsum of Diagonal Numbers is >> %d",sum);
    


    return 0;
}