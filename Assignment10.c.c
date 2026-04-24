#include <stdio.h>
#include <math.h>

int main() {
    int choice, n, i;
    double num1, num2, result;
    long long fact = 1;

    printf("\n=== Simple Calculator ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 == 0)
                printf("Error! Division by zero not allowed.\n");
            else {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a positive integer: ");
            scanf("%d", &n);
            if(n < 0)
                printf("Factorial not defined for negative numbers.\n");
            else {
                for(i = 1; i <= n; i++) {
                    fact *= i;
                }
                printf("Factorial of %d = %lld\n", n, fact);
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
