#include <stdio.h>
void minMax(int a[], int n, int *mn, int *mx){
    int i;
    *mn = *mx = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < *mn)
            *mn = a[i];

        if(a[i] > *mx)
            *mx = a[i];
    }
}
int main()
{
    int a[] = {12, 45, 7, 23, 9};
    int min, max;
    minMax(a, 5, &min, &max);
    printf("Min = %d\n", min);
    printf("Max = %d", max);
    return 0;
}
