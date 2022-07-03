#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *point;
    point = (int *)calloc(6, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("enter %d value >> ",i+1);
        scanf("%d",&point[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d is: %d\n",i+1,point[i]);
    }
    


    return 0;
}