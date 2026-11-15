/*Power set — recursion
Write a recursive function that prints every subset of a given set of n distinct numbers. Use the
rule: for each element, either include it or exclude it, then recurse on the rest. Print the total
count as a check (it must be 2n).
INPUT 3 / 1 2 3 OUTPUT 8 subsets printed (for example {} {1} {2} {1 2}
… ), Count = 8 */
#include<stdio.h>
int a[]={1,2,3};
int sub[10];
int n=3,count=0;
void power(int idx,int size){
    int i;
    if(idx==n){
        printf("{ ");
        for(i=0;i<size;i++)
            printf("%d ",sub[i]);
        printf("}\n");
        count++;
        return;
    }
    power(idx+1,size);
    sub[size]=a[idx];
    power(idx+1,size+1);
}
int main(){
    power(0,0);
    printf("Count = %d",count);
    return 0;
}
