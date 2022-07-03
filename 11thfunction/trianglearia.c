#include<stdio.h>
float area(float a, float b)
{
    float result;
    result = 0.5*a*b;
    return result;
}
int main()
{
    float base,hight,sum;
    printf("enter triangle base >> ");
    scanf("%f",&base);
    printf("enter triangle hight >> ");
    scanf("%f",&hight);
    sum = area(base,hight);
    printf("your area of triangle is = %.2f",sum);

    return 0;
}