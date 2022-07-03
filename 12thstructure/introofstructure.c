#include<stdio.h>
struct student
{
    char name[10];
    int roll;
    int class;
};


int main()
{
    struct student id1,id2,id3;
    printf("student information >> \n\n");
    printf("Enter ID 1 student information >> \n");
    printf("Enter ID 1 student Name >> ");
    scanf("%s[^\0]",&id1.name);
    printf("Enter ID 1 student Roll >> ");
    scanf("%d",&id1.roll);
    printf("Enter ID 1 student Class >> ");
    scanf("%d",&id1.class);

    printf("\n\nEnter ID 2 student information >>\n");
    printf("Enter ID 2 student Name >>");
    scanf("%s[^\0]",&id2.name);
    printf("Enter ID 2 student Roll >> ");
    scanf("%d",&id2.roll);
    printf("Enter ID 2 student Class >> ");
    scanf("%d",&id2.class);

    printf("\n\nEnter ID 3 student information >>\n");
    printf("Enter ID 3 student Name >> ");
    scanf("%s[^\0]",&id3.name);
    printf("Enter ID 3 student Roll >> ");
    scanf("%d",&id3.roll);
    printf("Enter ID 3 student Class >> ");
    scanf("%d",&id3.class);

    printf("ID 1 Student Name: %s Roll: %d Class: %d\n",id1.name,id1.roll,id1.class);
    printf("ID 2 Student Name: %s Roll: %d Class: %d\n",id2.name,id2.roll,id2.class);
    printf("ID 3 Student Name: %s Roll: %d Class: %d",id3.name,id3.roll,id3.class);

    return 0;
}