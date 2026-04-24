#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    struct Student s[100];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input details
    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        printf("Enter marks for 3 subjects:\n");
        for(j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3;
    }

    // Display results
    printf("\n--- Student Results ---\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %.2f\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);

        if(s[i].percentage >= 50)
            printf("Result: Pass\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}
