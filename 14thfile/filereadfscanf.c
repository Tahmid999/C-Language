#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char ch[100];
    file = fopen("2ndfile.txt","r");

    if (file==NULL)
    {
        printf("file is not open");
    }
    else
    {
        printf("file is open\n");
        while (!feof(file))
        {
        fscanf(file,"%s[^\0]",&ch);
        printf("%s",ch);
            
        }
        
        fclose(file);
    }

    return 0;
}