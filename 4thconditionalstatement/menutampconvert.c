#include<stdio.h>
int main()
{
    int choise,farengite,celcius,result;
    printf("::::::Tamparature Converter:::::::\n");
    printf("1.Celcius to Farenhite\n");
    printf("2.Farenhite to Celcius\n");
    printf("enter your choise: ");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
        printf("enter celcius value >> ");
        scanf("%d",&farengite);
        result = (1.8*farengite)+32;
        printf("the value in farenhite is %ddeg",result);
        break;
    case 2:
        printf("enter farenhite value >> ");
        scanf("%d",&celcius);
        result = (farengite-32)/1.8;
        printf("the value in celcius is %ddeg",result);
        break;
    
    default:
        printf("Please, chose a valid option");
        break;
    }

    return 0;
}