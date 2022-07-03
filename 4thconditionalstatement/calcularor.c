#include<stdio.h>
int main()
{
    float a,b,sum;
    int choise;
    printf("--:::Welcome to mini calculator:::--\n");
    printf("Enter a Number >> ");
    scanf("%f",&a);
    printf("1.Add\n");
    printf("2.Sub\n");
    printf("3.Multi\n");
    printf("4.Divid\n");
    printf("5.Modu");
    printf("Please, Enter Your Option >>");
    scanf("%d",&choise);

    switch (choise)
    {
    case 1:
        printf("Enter another Number >> ");
        scanf("%f",&b);
        sum = a + b;
        printf("Your ans is %.2f + %.2f = %.2f\n",a,b,sum);
        break;
    case 2:
        printf("Enter another Number >> ");
        scanf("%f",&b);
        sum = a - b;
        printf("Your ans is %.2f - %.2f = %.2f\n",a,b,sum);
        break;
    case 3:
        printf("Enter another Number >> ");
        scanf("%f",&b);
        sum = a * b;
        printf("Your ans is %.2f * %.2f = %.2f\n",a,b,sum);
        break;
    case 4:
        printf("Enter another Number >> ");
        scanf("%f",&b);
        sum = a / b;
        printf("Your ans is %.2f / %.2f = %.2f\n",a,b,sum);
        break;
    
    default:
        printf("Please, enter valid option\n");
        break;
    }
    printf("Tnx to use");
    return 0;
}