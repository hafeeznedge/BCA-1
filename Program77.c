#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book library[n];  // Array of structures

    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &library[i].id);

        printf("Title: ");
        scanf(" %[^\n]", library[i].title);  // reads string with spaces

        printf("Author: ");
        scanf(" %[^\n]", library[i].author);

        printf("Price: ");
        scanf("%f", &library[i].price);
    }

    printf("\n===== Library Books =====\n");
    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: %.2f\n", library[i].price);
    }

    return 0;
}
