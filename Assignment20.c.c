#include <stdio.h>

/* Function for swapping without pointers */
void swap_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

/* Function for swapping with pointers */
void swap_reference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap_value(a, b);

    swap_reference(&a, &b);

    printf("\nAfter swapping with pointers:\n");
    printf("x = %d y = %d\n", a, b);

    return 0;
}
