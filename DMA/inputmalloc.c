#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *point;
    int num;
    printf("how many array do you want >> ");
    scanf("%d",&num);

    point = malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        printf("enter %d value >> ",i+1);
        scanf("%d",&point[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("the value of %d is: %d\n",i+1,point[i]);
    }
    
    return 0;
}