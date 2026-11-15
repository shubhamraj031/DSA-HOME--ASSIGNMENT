/*Quick sort with median-of-three pivot — avoid the worst case
Sort n integers with quick sort. For the pivot, take the median of a[lo] , a[mid] and a[hi] ,
and move it to a[hi] before partitioning. Count the comparisons and print them. Run it on the
sorted input 1 … 10 ; a naive last-element pivot needs 45 comparisons on this input.
INPUT 10 / 1 2 3 4 5 6 7 8 9 10 OUTPUT Sorted: 1 2 … 10, Comparisons:
(well below 45)*/
#include<stdio.h>
int count=0;
void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}
int partition(int a[],int lo,int hi){
    int mid=(lo+hi)/2;
    int i,j,p;
    if(a[lo]>a[mid]) swap(&a[lo],&a[mid]);
    if(a[lo]>a[hi]) swap(&a[lo],&a[hi]);
    if(a[mid]>a[hi]) swap(&a[mid],&a[hi]);
    swap(&a[mid],&a[hi]);
    p=a[hi];
    i=lo-1;
    for(j=lo;j<hi;j++){
        count++;
        if(a[j]<p){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[hi]);
    return i+1;
}
void quick(int a[],int lo,int hi){
    int p;
    if(lo<hi){
        p=partition(a,lo,hi);
        quick(a,lo,p-1);
        quick(a,p+1,hi);
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=10,i;
    quick(a,0,n-1);
    printf("Sorted: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nComparisons: %d",count);
    return 0;
}
