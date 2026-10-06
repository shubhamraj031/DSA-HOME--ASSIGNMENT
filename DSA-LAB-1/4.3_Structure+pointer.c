/*Stretch) Read n students into an array and, 
using a pointer to move through it, find and print the topper.*/
#include <stdio.h>
struct Student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct Student s[10], *p;
    int n, i, top = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter name and roll and marks: ");
        scanf("%s %d %f",
              s[i].name, &s[i].roll, &s[i].marks);
    }
    p = s;
    for(i = 1; i < n; i++)
    {
        if((p + i)->marks > (p + top)->marks)
            top = i;
    }
    printf("\nTopper: %s", (p + top)->name);
    printf("\nRoll: %d", (p + top)->roll);
    printf("\nMarks: %.2f", (p + top)->marks);
    return 0;
}
