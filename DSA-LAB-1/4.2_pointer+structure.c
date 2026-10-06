/*Write a function update(struct Student *s,
 float m) that changes the marks through 
 the pointer and confirm the change in main().*/
 #include <stdio.h>
struct Student
{
    char name[20];
    int roll;
    float marks;
};
void update(struct Student *s, float m)
{
    s->marks = m;
}
int main(){
    struct Student s = {"Rahul", 101, 75};
    printf("Before update: %.2f\n", s.marks);
    update(&s, 90);
    printf("After update: %.2f", s.marks);
    return 0;
}
