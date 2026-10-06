#include <stdio.h>
int main()
{
    int a[] = {4, 5, 6, 7, 1, 2, 3};
    int n = 7;
    int key = 6;
    int low = 0;
    int high = n - 1;
    int mid;
    int found = -1;
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            found = mid;
            break;
        }

        if(a[low] <= a[mid])
        {
            if(key >= a[low] && key < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if(key > a[mid] && key <= a[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    if(found != -1)
        printf("Found at index %d", found);
    else
        printf("Not found");
    return 0;
}
