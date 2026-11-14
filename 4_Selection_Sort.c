#include <stdio.h>
int main(){
    int n, a[100];
    int i, j, max, temp;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++){
        max = i;
        for (j=i+1; j<n;j++){
            if (a[j]>a[max])
                max=j;
        }
        temp=a[i];
        a[i]=a[max];
        a[max]=temp;
    }
    printf("Sorted (descending):");
    for (i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}
