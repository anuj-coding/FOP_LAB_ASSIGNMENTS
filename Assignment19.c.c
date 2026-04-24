#include <stdio.h>
#include <string.h>

struct EMPLOYEE
{
    char name[50];
    char designation[50];
    char gender;
    char doj[20];
    float salary;
};

void countGender(struct EMPLOYEE e[], int n)
{
    int male=0, female=0;

    for(int i=0;i<n;i++)
    {
        if(e[i].gender=='M' || e[i].gender=='m')
            male++;
        else if(e[i].gender=='F' || e[i].gender=='f')
            female++;
    }

    printf("\nMale Employees: %d", male);
    printf("\nFemale Employees: %d\n", female);
}

void salaryAbove10k(struct EMPLOYEE e[], int n)
{
    printf("\nEmployees with Salary more than 10000:\n");

    for(int i=0;i<n;i++)
    {
        if(e[i].salary > 10000)
        {
            printf("%s\n", e[i].name);
        }
    }
}

void asstManager(struct EMPLOYEE e[], int n)
{
    printf("\nEmployees with designation Asst Manager:\n");

    for(int i=0;i<n;i++)
    {
        if(strcmp(e[i].designation,"Asst Manager")==0)
        {
            printf("%s\n", e[i].name);
        }
    }
}

int main()
{
    struct EMPLOYEE e[100];
    int n;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter details of employee %d\n",i+1);

        printf("Name: ");
        scanf("%s",e[i].name);

        printf("Designation: ");
        scanf(" %[^\n]",e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c",&e[i].gender);

        printf("Date of Joining: ");
        scanf("%s",e[i].doj);

        printf("Salary: ");
        scanf("%f",&e[i].salary);
    }

    printf("\nTotal Employees: %d\n", n);

    countGender(e,n);
    salaryAbove10k(e,n);
    asstManager(e,n);

    return 0;
}
