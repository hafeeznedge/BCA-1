#include <stdio.h>

int main() {
    int i, j;

    printf("Multiplication Table (1 to 10):\n\n");

    for(i = 1; i <= 10; i++) {
        for(j = 1; j <= 10; j++) {
            printf("%4d", i * j);  // prints neatly in columns
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}