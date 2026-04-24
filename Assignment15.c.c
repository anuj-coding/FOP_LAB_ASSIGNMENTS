#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    // Seed for random number generator
    srand(time(0));

    printf("Pseudo Random Numbers are:\n");

    for(i = 1; i <= 5; i++)
    {
        printf("%d\n", rand());
    }

    return 0;
}
