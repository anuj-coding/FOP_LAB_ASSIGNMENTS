#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, a;
    long long fact = 1;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0)
        printf("Square root of %d = %.2f\n", n, sqrt(n));
    else
        printf("Square root is not defined for negative numbers\n");
        
    printf("Square of %d = %d\n", n, n * n);

    printf("Cube of %d = %d\n", n, n * n * n);

    if (n <= 1)
        isPrime = 0;
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;     
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is not a Prime number\n", n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers\n");
    else
    {
        for (i = 1; i <= n; i++)
            fact = fact * i;
        printf("Factorial of %d = %lld\n", n, fact);
    }

    printf("Prime factors of %d are: ", n);
    a = n;

    for (i = 2; i <= a; i++)
    {
        while (a % i == 0)
        {
            printf("%d ", i);
            a = a / i;
        }
    }

    return 0;
}
