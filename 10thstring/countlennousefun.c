#include<stdio.h>
int main()
{
    char s1[50];
    int len=0,i=0;

    printf("enter any string >> ");
    gets(s1);

    while (s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("your numbers of string is = %d",len);


    return 0;
}