#include <stdio.h>
#include <string.h> // Include this for strlen()
// Define the structure for employee details
struct Employee
{
    int id;
    char name[50];
    float salary;
};
#include <stdio.h>
int main()
{
    struct Employee employees[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        getchar();
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        size_t len = strlen(employees[i].name);
        if (employees[i].name[len - 1] == '\n')
        {
            employees[i].name[len - 1] = '\0';
        }
        printf("salary :");
        scanf("%f", &employees[i].salary);
        printf("\n");
    }
    printf("Employee Details:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }

        return 0;
    }