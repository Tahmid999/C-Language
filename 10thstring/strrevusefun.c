#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];

    printf("enter string >> ");
    gets(s1);

    strrev(s1);
    printf("your reverse string is >> %s",s1);

    return 0;
}