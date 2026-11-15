/* Question 01--Merge two sorted arrays — merge step alone
Read two sorted arrays and print one merged sorted array. Do not call a sort function; use the
merge step from merge sort only.
INPUT 4 / 1 3 5 7 / 4 / 2 4 6 8 OUTPUT 1 2 3 4 4 5 6 7 8 */
#include<stdio.h>
int main(){
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int n=4,m=4,i=0,j=0,k=0;
    int c[8];
    while(i<n && j<m){
        if(a[i]<b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n) c[k++]=a[i++];
    while(j<m) c[k++]=b[j++];
    for(i=0;i<k;i++) printf("%d ",c[i]);
    return 0;
}
