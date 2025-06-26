//Program to check if pass or fail
#include <stdio.h> 
int main() {
    int mark; 
    printf("Enter your marks: ");
    scanf("%d", &mark);

    // Check if the mark is greater than or equal to 40
    if (mark >= 40) {
        // If the condition is true, display the "You have passed" message
        printf("Result : Pass \n");
    } else {
        // Optional: Display a message if the mark is less than 40
        printf("Result : Fail \n");
    }

    return 0; 
}