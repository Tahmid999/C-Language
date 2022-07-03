#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    file = fopen("1stfile.txt","w");
    char text[30];
    int i,len;

   

    if (file==NULL)
    {
        printf("file is not open");
    }
    else
    {
        printf("file is open\n");

        printf("enter string >> ");
        gets(text);

        fputs(text,file);

        fclose(file);
    }

    return 0;
}