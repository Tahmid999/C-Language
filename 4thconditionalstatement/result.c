#include <stdio.h>
int main()
{
    int p, c, m, total;
    printf("enter physics marks >> ");
    scanf("%d", &p);
    printf("enter chemestry marks >> ");
    scanf("%d", &c);
    printf("enter math marks >> ");
    scanf("%d", &m);

    total = p + c + m / 3;

    if((total<40) || p<33 || c<33 || m<33)
    {
        printf("your total mark is %.2f,and your are fail\n",(float)total);
    }
    else
        printf("your total mark is %.2f, and your are pass",(float)total);

    return 0;
}