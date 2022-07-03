#include<stdio.h>
int main()
{
    int a[3] [5] = { {5,10,15,20,25}, {35,40,45,50,55}, {65,70,75,80,85} };
    int row,col;
    for ( row = 0; row < 3; row++)
    {
        for ( col = 0; col < 5; col++)
        {
            printf("%d ",a[row] [col]);
            
        }
        
    }
    return 0;
}