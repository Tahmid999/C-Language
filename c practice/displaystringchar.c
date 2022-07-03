#include<stdio.h>
int main()
{
    char ch[50];
    int i;
    printf("enter your name : ");
    gets(ch);
    for ( i = 0; ch[i] !='\0'; i++)
    {
        printf("%c\n",ch[i]);
    }
    

    return 0;
}