#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("enter a number >> ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d this is a even number",a);
    }
    else
    {
        printf("%d this is a odd number",a);
    }
    


    return 0;
}