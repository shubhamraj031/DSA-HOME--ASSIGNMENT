/* Hand trace and recurrence — on paper
(a) Trace merge sort on 5 1 4 2 8 . Draw each split and each merge, the way the lab notes
do. (b) Merge sort satisfies T(n) = 2T(n/2) + n . Use the recursion tree method to show that
T(n) = O(n log n) . Write the cost of each level and the number of levels.
ANSWER (a) final array 1 2 4 5 8 (b) levels = log2n + 1, each level costs
n */
#include<stdio.h>
void show(int a[],int l,int r){
    int i;
    printf("[ ");
    for(i=l;i<=r;i++)
        printf("%d ",a[i]);
    printf("]");
}
void merge(int a[],int l,int m,int r){
    int t[20],i=l,j=m+1,k=0;
    printf("Merge: ");
    show(a,l,m);
    printf(" + ");
    show(a,m+1,r);
    while(i<=m && j<=r){
        if(a[i]<=a[j]){
            t[k]=a[i];
            i++;
        }
        else{
            t[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=m){
        t[k]=a[i];
        i++;
        k++;
    }
    while(j<=r){
        t[k]=a[j];
        j++;
        k++;
    }
    for(i=0;i<k;i++)
        a[l+i]=t[i];
    printf(" = ");
    show(a,l,r);
    printf("\n");
}

void mergesort(int a[],int l,int r){
    int m;
    if(l<r){
        m=(l+r)/2;
        printf("Split: ");
        show(a,l,r);
        printf(" -> ");
        show(a,l,m);
        printf(" and ");
        show(a,m+1,r);
        printf("\n");
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int a[]={5,1,4,2,8};
    int n=5,i;
    mergesort(a,0,n-1);
    printf("Final array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
