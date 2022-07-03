#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, gess, ngess = 1;

    srand(time(0));
    number = rand() % 100 + 1;

    do
    {
        printf("enter a gess number 1 to 100 >> ");
        scanf("%d", &gess);
        if (gess > number)
        {
            printf("enter lower number\n");
        }
        else if (gess < number)
        {
            printf("enter upper number\n");
        }
        else
        {
            printf("you gess the numbers is %d, with %d attempts\n",gess,ngess);
        }

        ngess++;

    } while (gess != number);

    return 0;
}