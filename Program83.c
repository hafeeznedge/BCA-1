#include <stdio.h>
#include <string.h>

char patients[50][50];
int age[50], total = 0;

void addPatient() {
    printf("Enter patient name: ");
    scanf("%s", patients[total]);
    printf("Enter age: ");
    scanf("%d", &age[total]);
    total++;
    printf("Patient added!\n");
}

void showPatients() {
    printf("\nPatients List:\n");
    for (int i = 0; i < total; i++) {
        printf("%d. %s (Age: %d)\n", i + 1, patients[i], age[i]);
    }
}

void searchPatient() {
    char name[50];
    printf("Enter patient name to search: ");
    scanf("%s", name);
    for (int i = 0; i < total; i++) {
        if (strcmp(patients[i], name) == 0) {
            printf("Patient Found: %s, Age %d\n", patients[i], age[i]);
            return;
        }
    }
    printf("Patient not found!\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Patient\n2. Show Patients\n3. Search Patient\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addPatient(); break;
            case 2: showPatients(); break;
            case 3: searchPatient(); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
