#include <stdio.h>
int main()
{
    int n, i, sum = 1;
    printf("enter n value : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum *= i;

        if (i == 1)
        {
            printf("1X");
        }
        else if (i == n)
        {
            printf("%d", i);
        }
        else
            printf("%dX", i);
    }
    printf(" = %d", sum);

    return 0;
}