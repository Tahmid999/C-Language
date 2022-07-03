#include<stdio.h>
int main()
{
    char str[20],ch;
    int i,v,c,n,w,o;
    i=v=c=n=w=o=0;
    printf("enter str : ");
    gets(str);

    for ( i = 0; (ch=str[i]) != '\0'; i++)
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            v++;
        }
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            c++;
        }
        else if (ch>='0' && ch<='9')
        {
            n++;
        }
        else if (ch==' ')
        {
            w++;
        }
        else
        {
            o++;
        }    
        w++;
        
    }

    printf("vowel = %d\n",v);
    printf("consonant = %d\n",c);
    printf("number = %d\n",n);
    printf("word = %d\n",w);
    printf("other = %d\n",o);
    

    return 0;
}