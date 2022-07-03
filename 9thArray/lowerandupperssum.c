#include<stdio.h>
int main()
{
    int a[3][3],i,j,uppersum=0,lowersum=0;
    

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

    // making upper and lower sum numbers
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i<j)
            {
                uppersum = uppersum + a[i][j];
            }  
            if (i>j)
            {
                lowersum = lowersum + a[i][j];
            }  
        } 
    }
    
    // printing sum
    printf("\nsum of uppercase Numbers is >> %d\n",uppersum);
    printf("sum of lowercase Numbers is >> %d",lowersum);
    


    return 0;
}