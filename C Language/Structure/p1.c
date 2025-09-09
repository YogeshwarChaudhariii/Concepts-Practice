#include <stdio.h>

struct Book 
{
    char Title[30];
    char Author[30];
    float Price;
}; 

void DisplayBookDetails(struct Book book[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Title of Book: %s\n", book[i].Title);
        printf("Name of Author: %s\n", book[i].Author);
        printf("Price of Book: %.2f\n", book[i].Price);
        printf("\n");
    }
}

int main()
{
    struct Book book[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter Title of Book %d: ", i+1);
        scanf(" %[^\n]", book[i].Title);   

        printf("Enter Author of Book %d: ", i+1);
        scanf(" %[^\n]", book[i].Author);

        printf("Enter Price of Book %d: ", i+1);
        scanf("%f", &book[i].Price);
    }
    
    printf("\n--- Book Details ---\n");
    DisplayBookDetails(book, 3);

    return 0;
}
