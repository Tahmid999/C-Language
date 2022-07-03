#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers >> ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("%d is big number",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is big number",b);
    }
    else
        printf("%d is big number",c);


    

    return 0;
}