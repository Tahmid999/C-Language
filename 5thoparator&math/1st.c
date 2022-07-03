
#include<stdio.h>
int main() {

    float a,b,c,sum,avg;
    printf("enter 3 numbers >> ");
    scanf("%f %f %f",&a,&b,&c);
    sum = a + b +c;
    printf("sum is = %.2f\n",sum);
    avg = sum/3;
    printf("avarage is = %.2f",avg);


    return 0;
}