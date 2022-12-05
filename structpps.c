#include<stdio.h>
int main()
{
    struct date
    {
        int day;
        int month;
        int year;
    }dob;
    struct student
    {
        char name;
        float gpa;
        int roll;
        struct date dob;
    }ug,pg;
    printf("Enter the name of Student\n ");
    gets(ug.name);
    printf("Enter the GPA of Student\n ");
    scanf("%f", &ug.gpa);
    printf("Enter the roll of Student\n ");
    scanf("%d", &ug.roll);
    printf("Enter the DOB of Student(dd,mm,yy)\n ");
    scanf("%d", &ug.dob.day);
    scanf("%d", &ug.dob.month);
    scanf("%d", &ug.dob.year);
    printf("Enter the Student's details\n");
    printf("The name of the student is %s",ug.name);
    printf("The GPA of the Student is %f", ug.gpa);
    printf("The roll number of the student is %d", ug.roll);
    printf("The DOB of the Student is %d %d %d", ug.dob.day,ug.dob.month,ug.dob.year);

    return 0;
}