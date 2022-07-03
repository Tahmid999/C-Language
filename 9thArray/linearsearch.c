#include<stdio.h>
int main()
{
    int num[] = {15,25,50,45,48,10,100};
    int value,position=-1,i;
    printf("enter valule >> ");
    scanf("%d",&value);
    for ( i = 0; i < 8; i++)
    {
        if (value==num[i])
        {
            position = i+1;
            break;
        }
        
    }
    if (position==-1)
    {
        printf("not found");
    }
    else
        printf("your value is found and position is %d",position);
    
    return 0;
}