#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("enter any charecter >> ");
    scanf("%c",&c);

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("%c is vowel charecter",c);
    }
    else if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("%c is vowel charecter",c);
    }
    
    else
        printf("%c is consonet charecter",c);
    
    return 0;
}