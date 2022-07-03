#include<stdio.h>
int main() {

    float a,b,c,s,area;
    printf("enter 3 arms of traingle >> ");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c) / 2;
    area = sqrt (s*(s-a)*(s-b)*(s-c));
    printf("area of trangle is >> %.3f",area);

    return 0;
}