#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];

    printf("enter string >> ");
    gets(s1);
    printf("enter another string >> ");
    gets(s2);

    strcat(s1,s2);

    printf("string s1 is = %s\n",s1);
    printf("string s2 is = %s\n",s2);


    return 0;
}