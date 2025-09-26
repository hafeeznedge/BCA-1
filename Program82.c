#include <stdio.h>
#include <string.h>

// Global arrays
int ids[50], price[50], seats[50];
char places[50][50];
int n = 0;

// Function Prototypes
void readPackages();
void displayPackages();
void bookPackage();
void searchPackage();
void menu();

int main() {
    int choice;
    while (1) {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: readPackages(); break;
            case 2: displayPackages(); break;
            case 3: bookPackage(); break;
            case 4: searchPackage(); break;
            case 5: printf("\nExiting program... Goodbye!\n"); return 0;
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
}

// Show menu
void menu() {
    printf("\n===== Travel Management System =====");
    printf("\n1. Read Travel Packages");
    printf("\n2. Display Travel Packages");
    printf("\n3. Book a Package");
    printf("\n4. Search a Package");
    printf("\n5. Exit");
    printf("\n====================================\n");
}

// Read packages
void readPackages() {
    printf("\nEnter number of travel packages: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        ids[i] = i + 1;
        printf("\nEnter details for package %d:\n", i + 1);
        printf("Place: ");
        scanf("%s", places[i]);
        printf("Price: ");
        scanf("%d", &price[i]);
        printf("Available Seats: ");
        scanf("%d", &seats[i]);
    }
    printf("\nPackages added successfully!\n");
}

// Display packages
void displayPackages() {
    if (n == 0) {
        printf("\nNo packages available!\n");
        return;
    }

    printf("\n--- Travel Packages ---\n");
    printf("%-5s %-15s %-10s %-10s\n", "ID", "Place", "Price", "Seats");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-10d %-10d\n", ids[i], places[i], price[i], seats[i]);
    }
}

// Book a package (simpler)
void bookPackage() {
    int id;
    printf("\nEnter package ID to book: ");
    scanf("%d", &id);

    if (id < 1 || id > n) {
        printf("\nInvalid Package ID!\n");
        return;
    }

    if (seats[id - 1] > 0) {
        seats[id - 1]--;
        printf("\nBooking successful for %s!\n", places[id - 1]);
    } else {
        printf("\nSorry, no seats left for %s.\n", places[id - 1]);
    }
}

// Search package (simpler)
void searchPackage() {
    char searchPlace[50];
    printf("\nEnter place to search: ");
    scanf("%s", searchPlace);

    for (int i = 0; i < n; i++) {
        if (strcmp(places[i], searchPlace) == 0) {
            printf("\nPackage Found!\n");
            printf("ID: %d | Place: %s | Price: %d | Seats: %d\n",
                   ids[i], places[i], price[i], seats[i]);
            return;
        }
    }
    printf("\nPackage not found!\n");
}
