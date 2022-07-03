#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[30];
    char temp[30];

    printf("enter s1 string >> ");
    gets(s1);
    printf("enter s2 string >> ");
    gets(s2);

    printf("before swaping\n\n");
    printf("s1 is = %s\n",s1);
    printf("s2 is = %s",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\n\nAfter swaping\n");
    printf("s1 is %s\n",s1);
    printf("s2 is %s\n",s2);

    return 0;
}