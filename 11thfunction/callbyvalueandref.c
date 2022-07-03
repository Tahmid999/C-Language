#include<stdio.h>
void callref(int *a, int *b)
{
    *a = 10;
    *b = 5;
}

int main()
{
    int x = 5;
    int y = 10;
    printf("value x = %d y = %d\n",x,y);

    callref(&x,&y);
    printf("Value is now x= %d y = %d",x,y);

    return 0;
}