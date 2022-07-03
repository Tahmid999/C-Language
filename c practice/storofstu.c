#include<stdio.h>
struct student
{
    char name[15];
    int roll,class;
    long phone;
};
int main()
{
    FILE *file;
    file = fopen("info.txt","a");
    struct student std[20];
    int i,n;
    printf("how many student : ");
    scanf("%d",&n);
    printf("enter %d info\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("enter student %d name: ",i+1);
        fflush(stdin);
        gets(&std[i].name);
        printf("enter student %d roll : ",i+1);
        scanf("%d",&std[i].roll);
        printf("enter student %d class : ",i+1);
        scanf("%d",&std[i].class);
        printf("enter student %d phone : ",i+1);
        scanf("%lld",&std[i].phone);
        printf("\n");
        fprintf(file,"%s\t\t%d\t%d\t%lld\n",std->name,std->roll,std->class,std->phone);
    }
    fclose(file);
    

    return 0;
}