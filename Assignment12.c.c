#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find smallest common divisor other than 1
int smallestCommonDivisor(int a, int b) {
    int i;
    int min = (a < b) ? a : b;

    for (i = 2; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            return i; // first common divisor found
        }
    }
    return -1; // no common divisor other than 1
}

int main() {
    int num1, num2, gcd, scd;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = findGCD(num1, num2);
    scd = smallestCommonDivisor(num1, num2);

    if (scd != -1)
        printf("Smallest Common Divisor (other than 1): %d\n", scd);
    else
        printf("No common divisor other than 1\n");

    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}
