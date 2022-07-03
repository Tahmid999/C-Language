#include <stdio.h>
int main()
{
    int i=0;
    for(i=1; i<=20; i= i + 1)
    {
        if (i%3==0)
            continue;
            printf("%d\n",i);
        if (i==14)
            break;
    }
    return 0;
}