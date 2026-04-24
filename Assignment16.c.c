#include <stdio.h>

int main()
{
    int n, i;
    int a[100];

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Even numbers are: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd numbers are: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
