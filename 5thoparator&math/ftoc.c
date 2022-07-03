#include<stdio.h>
int main() {

    float c,f;
    printf("enter farenhite value >> ");
    scanf("%f",&f);
    c = (f - 32)/1.8;
    printf("farenhite value is >> %.2f deg",c);

    return 0;
}