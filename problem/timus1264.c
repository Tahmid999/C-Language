#include<stdio.h>
int main()
{
    int N,A,B;
    scanf("%d %d",&N,&A);
    B = N+A-1;
    printf("%d %d",(B-N),(B-A));

    return 0;
}