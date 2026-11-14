#include <stdio.h>
void reverse(int a[],int l,int r) {
    int t;
    if (l >= r)
    return;
    t=a[l];
    a[l]=a[r];
    a[r]=t;
    reverse(a,l + 1,r-1);
}
int main(){
    int a[50],n,i;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter array:");
    for(i=0; i<n;i++)
        scanf("%d", &a[i]);
    reverse(a,0,n-1);
    printf("Reversed array: ");
    for(i=0; i<n; i++)
        printf("%d",a[i]);
    return 0;
}
