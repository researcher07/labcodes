#include <stdio.h>
#include <string.h>
struct PersonalDetails
{
    char name[50];
    int age;
    char address[100];
};
struct AcademicRecord
{
    struct PersonalDetails personal;
    int studentID;
    char course[50];
    float gpa;
};
int main()
{
    struct AcademicRecord student;
    printf("Enter student's personal details:\n");
    printf("Name: ");
    fgets(student.personal.name, sizeof(student.personal.name), stdin);
    size_t len = strlen(student.personal.name);
    if (student.personal.name[len - 1] == '\n')
    {
        student.personal.name[len - 1] = '\0';
    }
    printf("Age: ");
    scanf("%d", &student.personal.age);
    getchar();
    printf("Address: ");
    fgets(student.personal.address, sizeof(student.personal.address), stdin);
    len = strlen(student.personal.address);
    if (student.personal.address[len - 1] == '\n')
    {
        student.personal.address[len - 1] = '\0';
    }
    printf("\nEnter student's academic details:\n");
    printf("Student ID: ");
    scanf("%d", &student.studentID);
    getchar();
    printf("Course: ");
    fgets(student.course, sizeof(student.course), stdin);
    len = strlen(student.course);
    if (student.course[len - 1] == '\n')
    {
        student.course[len - 1] = '\0';
    }
    printf("GPA: ");
    scanf("%f", &student.gpa);
    printf("\nStudent's Academic Record:\n");
    printf("Personal Details:\n");
    printf("Name: %s\n", student.personal.name);
    printf("Age: %d\n", student.personal.age);
    printf("Address: %s\n", student.personal.address);
    printf("\nAcademic Details:\n");
    printf("Student ID: %d\n", student.studentID);
    printf("Course: %s\n", student.course);
    printf("GPA: %.2f\n", student.gpa);
    return 0;
}
