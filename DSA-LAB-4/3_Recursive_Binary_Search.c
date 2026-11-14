#include <stdio.h>
int bs(int a[],int l,int h,int key)
{
    if (l > h)
        return -1;
    int mid =(l + h)/2;
    if (a[mid] == key)
        return mid;
    if (key < a[mid])
        return bs(a, l,mid - 1,key);
    return bs(a,mid + 1,h,key);
}
int main()
{
    int a[]= {5, 8, 12, 15, 23};
    int key = 15;
    int r = bs(a, 0, 4,key);
    if (r == -1)
        printf("Not Found");
    else
        printf("Found at index %d",r);
    return 0;
}
