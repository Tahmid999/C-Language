#include<stdio.h>

struct student
{
    char name[10];
    int roll;
    int class;
};

int main()
{
    struct student id[5];
    int i;

    printf("Enter student information\n");

    for ( i = 0; i < 5; i++)
    {
        printf("enter student id %d information >> \n",i+1);
        printf("enter student id %d name >> ",i+1);
        scanf("%s[^\0]",&id[i].name);
        printf("enter student id %d roll >> ",i+1);
        scanf("%d",&id[i].roll);
        printf("enter student id %d class >> ",i+1);
        scanf("%d",&id[i].class);
        printf("\n\n");
    }


    printf("\n:::::Student information that you are send us:::::\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Studen id %d name: %s\n",i+1,id[i].name);
        printf("Studen id %d roll: %d\n",i+1,id[i].roll);
        printf("Studen id %d class: %d\n",i+1,id[i].class);
        printf("\n\n");
        
    }
    
    return 0;
}