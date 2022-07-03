#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sum,area,s;
    printf("enter 3 arms of tringle >> ");
    scanf("%f %f %f",&a,&b,&c);

    sum = a + b + c;
    s = (float)sum/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("s is %f and area is %f",s,area);

    return 0;
}