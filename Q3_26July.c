#include <stdio.h>

struct EMP
{
    char name[50];
    char gender[40];
    char desig[40];
    char dept[30];
    float basic;
    float gross;
};

int main()
{
    int n,i;
    printf("Enter the number of employee: ");
    scanf("%d", &n);

    struct EMP emp[50];
    struct EMP *employee, *temp;

    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter gender: ");
        scanf("%s", emp[i].gender);

        printf("Enter designations: ");
        scanf("%s", emp[i].desig);

        printf("Enter department: ");
        scanf("%s", emp[i].dept);

        printf("Enter basic salary: ");
        scanf("%f", &emp[i].basic);


        emp[i].gross = (emp[i].basic) + (emp[i].basic * 0.8) + (emp[i].basic * 0.1);
    }

    employee = &emp;
    temp = &emp;

    printf("Name:");
    for (i = 0; i < n; i++)
    {
        printf("%s\t", employee->name);
        employee++;
    }
    printf("\n");
    employee = temp;
    printf("Gender:");

    for (i = 0; i < n; i++)
    {
        printf("%s\t", employee->gender);
        employee++;
    }
    printf("\n");
    employee = temp;
    printf("Designations:");
    for(i = 0; i < n; i++)
    {
        printf("%s\t", employee->desig);
        employee++;
    }
    printf("\n");
    employee = temp;
    printf("Department:");
    for(i = 0; i < n; i++)
    {
        printf("%s\t", employee->dept);
        employee++;
    }

    printf("\n");
    employee = temp;
    printf("Basic:");
    for (i = 0; i < n; i++)
    {
        printf("%.2f\t", employee->basic);
        employee++;
    }
    printf("\n");
    employee = temp;
    printf("Gross: ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f\t", employee->gross);
        employee++;
    }
}
