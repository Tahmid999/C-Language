#include<stdio.h>
int main()
{
    int chos;
    float n1,n2;
    float sum;
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("enter your choice >> ");
    scanf("%d",&chos);

    switch (chos)
    {
    case 1:
        printf("enter two value >> ");
        scanf("%f %f",&n1,&n2);
        sum = n1 + n2;
        printf("%.3f + %.3f = %.3f",n1,n2,sum);
        break;
    case 2:
        printf("enter two value >> ");
        scanf("%f %f",&n1,&n2);
        sum = n1 - n2;
        printf("%.3f - %.3f = %.3f",n1,n2,sum);
        break;
    case 3:
        printf("enter two value >> ");
        scanf("%f %f",&n1,&n2);
        sum = n1 * n2;
        printf("%.3f * %.3f = %.3f",n1,n2,sum);
        break;
    case 4:
        printf("enter two value >> ");
        scanf("%f %f",&n1,&n2);
        sum = n1 / n2;
        printf("%.3f / %.3f = %.3f",n1,n2,sum);
        break;
    
    default:
        printf("invalide option, please try again!");
        break;
    }

    return 0;
}