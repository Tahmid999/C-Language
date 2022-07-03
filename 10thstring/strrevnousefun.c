

// fail  project

#include<stdio.h>
int main()
{
    char s1[30] = "tahmid";
    char s2[30];
    int i=0,len=0,j;

    // printf("enter string >> ");
    // gets(s1);

    while (s1[i]=='\0')
    {
        i++;
        len++;
    }

    for (j=0, i=len-1; i>=0; i--, j++)
    {
        s2[j] = s1[i];
    }
        s2[j] ='\0';
    
    printf("s2 = %s\n",s2);
    printf("string s1 is = %s\n",s1);

    return 0;
}