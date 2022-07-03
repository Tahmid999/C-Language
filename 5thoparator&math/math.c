#include<stdio.h>
int main()
{
    float base,hight,sum;
    printf("enter base : ");
    scanf("%f",&base);
    printf("enter hight : ");
    scanf("%f",&hight);
    sum = (float)1/2 * base * hight;
    printf("area of trangle is : %f",sum);

    return 0;
}