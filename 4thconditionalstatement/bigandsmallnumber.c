#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter 3 number >> ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if (n1>n2 && n1>n3)
    {
        printf("Big number is %d",n1);
    }
    else if (n2>n1 && n2>n3)
    {
        printf("Big number is %d",n2);
    }
    else if (n3>n2 && n3>n1)
    {
        printf("Big number is %d",n3);
    }
    else 
        printf("All Numbers are equals");
    
    return 0;
}