#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int lenth;

    printf("enter any string >> ");
    gets(s1);

    lenth = strlen(s1);

    printf("leanth of your string is = %d",lenth);


    return 0;
}