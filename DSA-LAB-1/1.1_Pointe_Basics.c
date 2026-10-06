/*QUESTION.01--1.1--Declare int x = 25 and a pointer p to it. Print the value of x ,
 the address &x , the value stored in p , and *p .*/
#include <stdio.h>
int main()
{
    int x = 25;
    int *p;
    p = &x;
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Value stored in p = %p\n", p);
    printf("Value of *p = %d\n", *p);

    return 0;
}
