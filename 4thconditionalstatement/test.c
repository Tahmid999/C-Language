#include <stdio.h>
#include <conio.h>
int main()
{
    char ca;
    printf("enter any thing >> ");
    scanf("%c",&ca);

    if (ca>='0' && ca<='9')
    {
        printf("this is digit");
    }
    else 
        printf("this is not digit");
    



    return 0;
}