#include <stdio.h>
int main()
{
  int a[] = {40, 60, 80, 50, 70};
  int n = 5, i, sum = 0, count = 0;
  float avg;
    for(i = 0; i < n; i++){
        sum = sum + a[i];
}
    avg = (float)sum / n;
    for(i = 0; i < n; i++)
    {
        if(a[i] > avg)
            count++;
    }
    printf("Average = %.2f\n", avg);
    printf("Above Average Count = %d", count);
    return 0;
}
