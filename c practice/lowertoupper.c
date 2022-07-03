#include<stdio.h>
int main()
{
    char upper;
    printf("enter lower letter >> ");
    scanf("%c",&upper);

    printf("%c lower case is %c",upper,upper+32);

    return 0;
}