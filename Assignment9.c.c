#include <stdio.h>

int main() {
    int num, temp;
    int d1, d2, d3;
    int sum;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    temp = num;

    d3 = temp % 10;
    temp = temp / 10;

    d2 = temp % 10;
    temp = temp / 10;

    d1 = temp;

    sum = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);

    if (sum == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}

