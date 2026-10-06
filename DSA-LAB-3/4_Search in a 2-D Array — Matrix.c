#include <stdio.h>
int main(){
int a[10][10];
int r, c, key;
int i, j, found = 0;
printf("Enter rows: ");
scanf("%d", &r);
printf("Enter columns: ");
scanf("%d", &c);
 printf("Enter elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter key: ");
    scanf("%d", &key);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] == key)
            {
                printf("Found at row %d column %d", i + 1, j + 1);
                found = 1;
            }
        }
    }
    if(found == 0)
    {
        printf("Not found");
    }
    return 0;
}
