#include<stdio.h>
int main()
{
    int sum,a,b,c;
    float avg;
    printf("enter three numbers >> ");
    scanf("%d %d %d",&a,&b,&c);


    sum = a + b + c;
    avg = (float)sum/3;
    printf("your sum is %d\n",sum);
    printf("your avg is >> %f",avg);
    return 0;
}