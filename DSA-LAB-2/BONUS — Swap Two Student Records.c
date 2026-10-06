#include <stdio.h>
struct Student{
    char name[30];
    int roll;
    float marks;
};
void swapStudents(struct Student *a, struct Student *b)
{
    struct Student temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    struct Student s1, s2;
    printf("Enter first student (name roll marks): ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

    printf("Enter second student (name roll marks): ");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);

    printf("\nBefore swap:\n");
    printf("%s %d %.2f\n", s1.name, s1.roll, s1.marks);
    printf("%s %d %.2f\n", s2.name, s2.roll, s2.marks);

    swapStudents(&s1, &s2);

    printf("\nAfter swap:\n");
    printf("%s %d %.2f\n", s1.name, s1.roll, s1.marks);
    printf("%s %d %.2f\n", s2.name, s2.roll, s2.marks);
    return 0;
}
