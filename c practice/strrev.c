#include<stdio.h>
int main()
{
    char ch[10],ch2[10];
    int i,j,len=0;
    printf("enter str : ");
    gets(ch);
    for ( i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    for ( j = 0, i=len-1; i >=0; i--, j++ )
    {
        ch2[j]=ch[i];
    }
    ch2[j]='\0';

    int d = strcmp(ch,ch2);

    if (d==0)
    {
        printf("palindrom string\n");
    }
    else
        printf("not palindrom string\n");
    
    printf("%s",ch2);

    return 0;
}