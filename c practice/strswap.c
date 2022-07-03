#include<stdio.h>
int main()
{
    char ch[10],ch2[10],temp[10];
    printf("enter str : ");
    gets(ch);
    printf("enter another str : ");
    gets(ch2);

    printf("ch = %s\n",ch);
    printf("ch2 = %s\n",ch2);

    strcpy(temp,ch);
    strcpy(ch,ch2);
    strcpy(ch2,temp);

    printf("ch = %s\n",ch);
    printf("ch2 = %s\n",ch2);

    return 0;
}