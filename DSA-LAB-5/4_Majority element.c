/* Majority element — more than n/2 times
Given an array, print the element that appears more than n/2 times. Sort a copy of the array
with merge sort, then scan the sorted copy for a run longer than n/2. Print No majority if
none exists.
INPUT 7 / 2 2 1 1 1 2 2 OUTPUT Majority = 2 */
#include<stdio.h>
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
    int a[]={2,2,1,1,1,2,2};
    int b[7];
    int n=7,i,j,found=0;
    for(i=0;i<n;i++)
        b[i]=a[i];
    mergesort(b,0,n-1);
    i=0;
    while(i<n){
        j=i;
        while(j<n && b[j]==b[i])
            j++;
        if(j-i>n/2){
            printf("Majority = %d",b[i]);
            found=1;
            break;
        }
        i=j;
    }
    if(found==0)
        printf("No majority");
    return 0;
}
