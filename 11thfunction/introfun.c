#include<stdio.h>

int sum(int a,int b)
{
    int result;
    result = a + b;
    return result;
}


int main()
{
    int n1,n2,n3,t1,t2;

    printf("enter three numbers >> ");
    scanf("%d %d %d",&n1,&n2,&n3);

    t1 = sum(n1,n2);
    t2 = sum(t1,n3);
    printf("your sum is %d+%d+%d = %d",n1,n2,n3,t2);

    return 0;
}