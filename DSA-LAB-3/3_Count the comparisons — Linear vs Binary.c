#include <stdio.h>
int main()
{
int a[100], n, key;
int i;
int linearCount = 0;
int binaryCount = 0;
int left, right, mid;
int found = 0;
printf("Enter n: ");
scanf("%d", &n);
printf("Enter sorted elements: ");
for(i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    /* Linear Search */
    for(i = 0; i < n; i++)
    {
        linearCount++;

        if(a[i] == key)
        {
            break;
        }
    }
    /* Binary Search */
    left = 0;
    right = n - 1;
    while(left <= right)
    {
        mid = (left + right) / 2;
        binaryCount++;

        if(a[mid] == key)
        {
            found = 1;
            break;
        }
        else if(a[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("Linear Search Comparisons = %d\n", linearCount);
    printf("Binary Search Comparisons = %d\n", binaryCount);
    return 0;
}
