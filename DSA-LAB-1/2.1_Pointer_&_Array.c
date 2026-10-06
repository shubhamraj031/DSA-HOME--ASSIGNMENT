//Question2-Pointer & Array-2.1--: Read n integers into an array and print them using pointer arithmetic *(p + i) ,not a[i]
#include <stdio.h>
int main()
{
    int a[100], n, i;
    int *p;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = a;
    printf("Array elements: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}
