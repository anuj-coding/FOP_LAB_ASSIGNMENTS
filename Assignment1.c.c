#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");

    // Check if input is a valid integer
    if (scanf("%d", &year) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    // Leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
}
