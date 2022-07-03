#include<stdio.h>
int main()
{
    double f,result;
    printf("enter fahrenhite number>>");
    scanf("%lf",&f);
    result = (f - 32) * 5/9;
    printf("celcious number is %.2lf deg",result);

    return 0;
}