#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("enter two numbers >> ");
    scanf("%f %f %f",&a,&b,&c);
    d = sqrt(b*b - 4*a*c);
    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf("your x1 is %.2f\n",x1);
    printf("your x2 is %.2f\n",x2);

    return 0;
}