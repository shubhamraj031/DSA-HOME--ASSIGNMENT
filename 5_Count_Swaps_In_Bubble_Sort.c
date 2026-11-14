#include <stdio.h>
int main(){
    int n,a[10];
    int i, j,temp,swaps=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0;i<n-1; i++){
        for(j = 0; j <-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swaps++;
    }
    }
    }
    printf("Sorted:");
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
    printf(", Swaps = %d\n", swaps);
    return 0;
}
