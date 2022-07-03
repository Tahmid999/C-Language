#include<stdio.h>
void basefun(double a, double b)
{
    double i,result=1;
    for ( i = 1; i <= b; i++)
    {
        result = result * a;

    }
    printf("ans is %.2lf",result);
    
}
int main()
{
    double base,exp;
    printf("enter base and exp : ");
    scanf("%lf^%lf",&base,&exp);
    basefun(base,exp);
    return 0;
}