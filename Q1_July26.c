#include <stdio.h>

struct EMP
{
    int emp_id;
    char name[30];
    char designation[30];
    int salary; 
};

int main()
{
    struct EMP emp[5];
    int a,b,i;
    printf("Let's start entering the details:\n");
    for(a=0;a<5;a++)
    {
        printf("Employee id:");
        scanf("%d",&emp[a].emp_id);
        printf("Name:");
        scanf("%s",emp[a].name);
        printf("Designation:");
        scanf("%s",emp[a].designation);
        printf("Salary:");
        scanf("%d",&emp[a].salary);
    }
    b=emp[0].salary;
    for(i=0;i<5;i++)
    {
        if(emp[i].salary>b)
        {
            b=emp[i].salary;
        } 
    }
    printf("Employee with hightest salary:\n");
    for(i=0;i<5;i++)
    {
        if(emp[i].salary==b)
        {
            printf("Employee ID:%d\n",emp[i].emp_id);
            printf("Name:%s\n",emp[i].name);
            printf("Designation:%s\n",emp[i].designation);
            printf("Salary:%d\n",emp[i].salary);
        }
    }


    return 0;

}    