/*question 4--Define struct Student { name, roll, marks }.
Point to one student with p and print all fields using
 the arrow operator (p->name, p->roll, p->marks).*/
 #include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s;
    struct Student *p;
    p = &s;
    printf("Enter name: ");
    scanf(" %[^\n]", p->name);

    printf("Enter roll: ");
    scanf("%d", &p->roll);

    printf("Enter marks: ");
    scanf("%f", &p->marks);

    printf("\nStudent Details\n");
    printf("Name = %s\n", p->name);
    printf("Roll = %d\n", p->roll);
    printf("Marks = %.2f\n", p->marks);
    return 0;
}
