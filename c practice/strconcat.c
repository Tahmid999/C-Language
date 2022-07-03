#include<stdio.h>
int main()
{
    char ch[20],ch1[20];
    int i=0,j=0,len=0;
    printf("enter str1 : ");
    gets(ch);
    scanf("");
    printf("enter str2 : ");
    gets(ch1);

    while (ch[i]!='\0')
    {
        i++;
        len++;
    }
    while (ch[j]!='\0')
    {
        
        ch[len+j] = ch1[j];
        j++;
    }
    
    printf("concat is = %s",ch);
    
    

    return 0;
}