/*Bonus — count inversions — stretch
Write a program that counts inversions (pairs i < j with a[i] > a[j] ) by modifying merge
sort, as in Lab 5 Q4. It must run in O(n log n), not by checking every pair.
INPUT 5 / 2 4 1 3 5 OUTPUT Inversions = 3 */
#include<stdio.h>
int inv=0;
void merge(int a[],int l,int m,int r){
    int t[20],i=l,j=m+1,k=0;
    while(i<=m && j<=r){
        if(a[i]<=a[j]){
            t[k]=a[i];
            i++;
        }
        else{
            t[k]=a[j];
            j++;
            inv=inv+(m-i+1);
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
}
void mergesort(int a[],int l,int r){
    int m;
    if(l<r){
        m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int a[]={2,4,1,3,5};
    int n=5;
    mergesort(a,0,n-1);
    printf("Inversions = %d",inv);
    return 0;
}
