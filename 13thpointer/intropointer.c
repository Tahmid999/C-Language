#include<stdio.h>
int main()
{
    int x ;
    int *poin;

    printf("enter x value >>");
    scanf("%d",&x);

    poin = &x;

    printf("x is = %d\n",x);
    printf("x address is = %d\n",&x);
    printf("poin is = %d\n",poin);
    printf("poin address is = %d\n",*poin);
    printf("poin address is = %d\n",&poin);


    return 0;
}