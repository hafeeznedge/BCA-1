#include <stdio.h>
#include <string.h>

char places[50][50];
int total = 0;

void addPlace() {
    printf("Enter place name: ");
    scanf("%s", places[total]);
    total++;
    printf("Place added!\n");
}

void showPlaces() {
    printf("\nPlaces to Travel:\n");
    for(int i=0;i<total;i++) {
        printf("%d. %s\n", i+1, places[i]);
    }
}

void searchPlace() {
    char name[50];
    printf("Enter place to search: ");
    scanf("%s", name);
    for(int i=0; i<total; i++) {
        if(strcmp(places[i], name) == 0) {
            printf("%s found at position %d\n", name, i+1);
            return;
        }
    }
    printf("%s not found.\n", name);
}

void deletePlace() {
    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > total) {
        printf("Invalid position!\n");
        return;
    }
    for(int i=pos-1; i<total-1; i++) {
        strcpy(places[i], places[i+1]);
    }
    total--;
    printf("Place deleted!\n");
}

void updatePlace() {
    int pos;
    printf("Enter position to update: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > total) {
        printf("Invalid position!\n");
        return;
    }
    printf("Enter new place: ");
    scanf("%s", places[pos-1]);
    printf("Place updated!\n");
}

void clearAllPlaces() {
    total = 0;
    printf("All places cleared!\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Add Place\n2. Show Places\n3. Search Place\n4. Delete Place\n5. Update Place\n6. Clear All\n7. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addPlace(); break;
            case 2: showPlaces(); break;
            case 3: searchPlace(); break;
            case 4: deletePlace(); break;
            case 5: updatePlace(); break;
            case 6: clearAllPlaces(); break;
            case 7: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
