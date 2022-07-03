#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("1sfile.txt","w");

    if (file==NULL)
    {
        printf("file is not import");
    }
    else
    {
        printf("file is import");
        fclose(file);
    }

    return 0;
}