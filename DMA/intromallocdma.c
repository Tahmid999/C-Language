#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *point;
    point = (float *)malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("enter %d value >> ",i+1);
        scanf("%f",&point[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d is: %.3f\n",i+1,point[i]);
    }
    


    return 0;
}