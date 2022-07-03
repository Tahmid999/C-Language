#include<stdio.h>
int main()
{
    char name[30];
    int age;
    FILE *file;
    file = fopen("2ndfile.txt","a");

    if (file==NULL)
    {
        printf("file is not open >> ");
    }
    else
    {
        printf("file is open\n");
        printf("enter your name >> ");
        scanf("%s[^\0]",&name);
        printf("enter your age >> ");
        scanf("%d",&age);

        printf("sucseccfully writen");
        fprintf(file,"name = %s, age = %d\n",name,age);
        fclose(file);
    }

    return 0;
}