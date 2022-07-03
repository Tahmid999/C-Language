#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("store.txt","a");
    char name[30];
    int age,class,i,n;
    int phone;

    if (file==NULL)
    {
        printf("file is not open");
    }
    else
    {
        printf("file is open\n");

        printf("how many students? >> ");
        scanf("%d",&n);

        for ( i = 0; i < n; i++)
        {
            printf("enter student %d name >> ",i+1);
            scanf("%s[^\0]",&name);
            printf("enter student %d age >> ",i+1);
            scanf("%d",&age);
            printf("enter student %d class >> ",i+1);
            scanf("%d",&class);
            printf("enter student %d phone >> ",i+1);
            scanf("%d",&phone);
            printf("\n");

            fprintf(file,"\n%s\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d",name,age,class,phone);
        }
        fclose(file);
    }

    return 0;
}