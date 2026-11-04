#include <stdio.h>
struct Student
{
    char name[10];
    int roll;
};
void show(struct Student st);
int main()
{
    struct Student std;
    printf("Enter Student record:\n");
    printf("Student name: ");
    scanf("%9s", std.name);
    printf("Enter Student roll number: ");
    scanf("%d", &std.roll);
    show(std);
    return 0;
}
void show(struct Student st)
{
    printf("\nStudent name is %s", st.name);
    printf("\nRoll number is %d\n", st.roll);
}
