#include <stdio.h>

// Recursive function
int factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// Non-recursive (iterative) function
int factorial_iterative(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial (Recursive) = %d\n", factorial_recursive(num));
    printf("Factorial (Iterative) = %d\n", factorial_iterative(num));

    return 0;
}
