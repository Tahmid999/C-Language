#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("2ndfile.txt","r");
    char ch;

    if (file==NULL)
    {
        printf("file is not open");
    }
    else
    {
        while (!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
    

    return 0;
}