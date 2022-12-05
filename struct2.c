#include <stdio.h>
int main()
{
    typedef struct dob
    {
        int day, month, year;
    } DATE;
    struct student
    {
        char name[20];
        int roll;
        float gpa;
        DATE DOB;
    } STUDENT;
    printf("Enter the name of the student\n ");
    scanf("%c", STUDENT.name);
    printf("Enter the Roll Number\n");
    scanf("%d", &STUDENT.roll);
    printf("Enter the GPA\n");
    scanf("%f", &STUDENT.gpa);
    printf("Enter date of birth\n");
    scanf("%d", &STUDENT.DOB.day);
    scanf("%d", &STUDENT.DOB.month);
    scanf("%d", &STUDENT.DOB.year);

    return 0;
}