#include <stdio.h>
int main()
{
    double n, i, sum = 0;
    printf("enter n value : ");
    scanf("%lf", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (1 / i);

        if (i == 1)
        {
            printf("1+ ");
        }
        else if (i == n)
        {
            printf("1/%.0lf", i);
        }
        else
            printf("1/%.0lf+ ", i);
    }
    printf(" = %.3lf", sum);

    return 0;
}