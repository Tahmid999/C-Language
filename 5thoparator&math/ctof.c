#include<stdio.h>
int main() {

    float c,f;
    printf("enter cal value >> ");
    scanf("%f",&c);
    f = (c * 1.8)+32;
    printf("farenhite value is >> %.2f deg",f);

    return 0;
}