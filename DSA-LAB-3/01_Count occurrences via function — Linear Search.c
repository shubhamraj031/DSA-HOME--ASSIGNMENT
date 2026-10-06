#include <stdio.h>
int countKey(int a[], int n, int key){
int i, count = 0;

for(i = 0; i < n; i++){
    if(a[i] == key)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[100], n, key, i, result;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);
    result = countKey(a, n, key);

    printf("%d appears %d times", key, result);
    return 0;
}
