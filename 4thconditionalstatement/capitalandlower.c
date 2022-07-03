#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("enter any charecter >> ");
    scanf("%c",&c);

    if(c>='a' && c<='z')
    {
        printf("%c is lowercase charecter",c);
    }
    else
        printf("%c is uppercase charecter",c);



    return 0;
}