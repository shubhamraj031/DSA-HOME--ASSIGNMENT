//QUESTION_1--1.1--Write a swap(int *a, int *b) function that swaps two numbers read from the user.

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swap: %d %d", a, b);
    return 0;
}

