/*Define a structure Book containing title, author, and price. 
Read n books and print them as a list.
Also print the details of the most expensive book and the average price of all books.*/
#include <stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book b[100];
    int n, i, max = 0;
    float sum = 0, average;
    printf("Enter number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter price: ");
        scanf("%f", &b[i].price);

        sum = sum + b[i].price;
    }
    for(i = 1; i < n; i++)
    {
        if(b[i].price > b[max].price)
        {
            max = i;
        }
    }
    average = sum / n;
    printf("\nBook List:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s - %s - %.1f\n",
               b[i].title, b[i].author, b[i].price);
    }
    printf("\nCostliest: %s (%.1f)\n",
           b[max].title, b[max].price);
    printf("Average = %.1f\n", average);
    return 0;
}
