#include<stdio.h>
int main()
{
    char s1[20];
    int i = 0;

    printf("enter any string >> ");
    gets(s1);


    while (s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
    

    return 0;
}