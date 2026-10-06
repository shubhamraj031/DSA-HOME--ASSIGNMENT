#include <stdio.h>
int main()
{
    int a[100], n;
    int i;
    int largest, second;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = a[0];
    second = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }
    printf("Second largest = %d", second);
    return 0;
}
