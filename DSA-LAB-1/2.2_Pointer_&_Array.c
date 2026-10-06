//Question2-Pointer & Array-2.1--:Find the largest element by walking the array with a pointer.
#include <stdio.h>
int main()
{
    int a[100], n, i;
    int *p;
    int largest;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = a;
    largest = *p;
    for(i = 1; i < n; i++)
    {
        if(*(p + i) > largest)
        {
            largest = *(p + i);
        }
    }
    printf("Largest = %d", largest);
    return 0;
}
