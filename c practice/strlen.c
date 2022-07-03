#include<stdio.h>
int main()
{
    char ch[20];
    int i,len=0;
    printf("enter str : ");
    gets(ch);

    for ( i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    printf("lenght is = %d",len);
    

    return 0;
}