#include<stdio.h>
int main()
{
    char ch;
    printf("enter a char >> ");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
        printf("small");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("Capital");
    }
    else
        printf("this is not character");
    

    return 0;
}