#include<stdio.h>
int main()
{
    int a[5] = {10,15,20,25,30},i;

    int *p;

    p = &a[0];

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*p);
        p++;
    }
    



    return 0;
}