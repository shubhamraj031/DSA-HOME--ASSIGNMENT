 /*QUESTION.01--1.1-- Using only the pointer (not x directly), change x to 100 and print x to confirm.*/
#include <stdio.h>
int main()
{
    int x = 25;
    int *p = &x;
    *p = 100;
    printf("Value of x = %d", x);

    return 0;
}
