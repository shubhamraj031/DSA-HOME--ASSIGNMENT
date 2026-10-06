#include <stdio.h>
int main(){
  int a[100], n, key;
  int left, right, mid;
  int floor = -1;
  int i;
printf("Enter n: ");
scanf("%d", &n);
printf("Enter sorted elements: ");
for(i = 0; i < n; i++)
{
    scanf("%d", &a[i]);
}
printf("Enter key: ");
scanf("%d", &key);
left = 0;
right = n - 1;
while(left <= right)
    {
    mid = (left + right) / 2;

    if(a[mid] == key)
    {
        floor = a[mid];
        break;
        }
    else if(a[mid] < key)
    {
        floor = a[mid];
        left = mid + 1;
        }
    else
    {
        right = mid - 1;
        }
    }
    if(floor == -1)
        printf("Floor = none");
    else
        printf("Floor = %d", floor);

    return 0;
}
