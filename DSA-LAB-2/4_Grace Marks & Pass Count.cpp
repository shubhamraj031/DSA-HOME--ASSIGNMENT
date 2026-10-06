#include <stdio.h>
struct Student{
    char name[30];
    int roll;
    float marks;
};
void addGrace(struct Student a[], int n, float g){
    int i;
    for(i = 0; i < n; i++)
        a[i].marks += g;
}
int countPass(struct Student a[], int n, float cut)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i].marks >= cut)
            count++;
    }
    return count;
}
int main()
{
    struct Student a[] = {
        {"Rahul", 101, 35},
        {"Amit", 102, 45},
        {"Ravi", 103, 38}
    };
    int n = 3, i;
    addGrace(a, n, 5);
    printf("After grace marks:\n");
    for(i = 0; i < n; i++)
        printf("%s %.0f\n", a[i].name, a[i].marks);
    printf("Passed = %d", countPass(a, n, 40));
    return 0;
}
