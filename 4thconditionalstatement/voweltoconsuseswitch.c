#include<stdio.h>
int main()
{
    char a;
    printf("enter char >> ");
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowel");
        break;
    case 'w':
    case 'y':
    case 'W':
    case 'Y':
        printf("sami vowel");
        break;
    
    default:
        printf("Consonent");
    }


    return 0;
}