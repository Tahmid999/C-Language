#include<stdio.h>
struct student
{
    char name[20];
    int class;
    int roll;
};
int main()
{
    struct student st[50];
    int n,i;
    printf("how many studnet : ");
    scanf("%d",&n);
    printf("::: enter %d student information :::\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("enter student %d name : ",i+1);
        fflush(stdin);
        gets(st[i].name);
        
        printf("enter student %d class : ",i+1);
        scanf("%d",&st[i].class);
        printf("enter student %d roll : ",i+1);
        scanf("%d",&st[i].roll);
        printf("\n");
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("student %d name : %s\n",i+1,st[i].name);
        printf("student %d class : %d\n",i+1,st[i].class);
        printf("student %d roll : %d\n",i+1,st[i].roll);
        printf("\n");
    }
    
    return 0;
}