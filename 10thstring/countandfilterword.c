#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],ch;
    int i,vowel,semivowel,consonant,word,digit,other;
    i=vowel=semivowel=consonant=word=digit=other=0;

    printf("enter string >> ");
    gets(s);

    while ((ch=s[i])!='\0')
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'  || ch=='I' || ch=='O' || ch=='U')
        {
            vowel++;
        }
        else if (ch=='y' || ch=='u' || ch=='Y' || ch=='U')
        {
            semivowel++;
        }
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            consonant++;
        }
        else if (ch==' ')
        {
            word++;
        }
        else if (ch>='0' && ch<='9')
        {
            digit++;
        }
        else
            other++;

        i++;
    }
    word++;

    printf("number of vowel is = %d\n",vowel);
    printf("number of semivowel is = %d\n",semivowel);
    printf("number of consonant is = %d\n",consonant);
    printf("number of word is = %d\n",word);
    printf("number of digit is = %d\n",digit);
    printf("number of other is = %d",other);

    return 0;
}