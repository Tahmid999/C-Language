#include<stdio.h>
#include<string.h>
void display(char s[])
{
    int i;
    printf("enter string >> ");
    gets(s);
    for ( i = 0; s[i]!='\0'; i++)
    {
        printf("%c\n",s[i]);
    }
    
}

int main()
{
    char str[20];

    display(str);


    return 0;
}