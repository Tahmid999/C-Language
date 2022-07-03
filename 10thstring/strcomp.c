#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    int i ;

    printf("enter string >> ");
    gets(s1);
    printf("enter another string >> ");
    gets(s2);

    i = strcmp(s1,s2);

    if (i==0)
    {
        printf("your string are equal");
    }
    
    else
        printf("your string are not equal");

    return 0;
}