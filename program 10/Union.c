#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};
struct student s1[3];
int main()
{
    int i;
    printf("Enter Name, RollNo, and Marks of Three Students:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%19s %d %f", s1[i].name,
              &s1[i].rollno, &s1[i].marks);
    }
    printf("\nStudent Name\tStudent Roll No\tStudent Marks");
    for (i = 0; i < 3; i++)
    {
        printf("\n%s\t\t%d\t\t%.2f",
               s1[i].name, s1[i].rollno, s1[i].marks);
    }
    return 0;
}
