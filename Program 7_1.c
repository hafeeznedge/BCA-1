//Program to check if Age >= 18 or not
#include <stdio.h> 
int main() {
    int age; 
    printf("Enter your Age: ");
    scanf("%d", &age);

    // Check if the age is greater than or equal to 18
    if (age >= 18) {
        // If the condition is true, display the "You have Eligible for voting" message
        printf("Result : you are Eligible for Voting \n");
    } else {
        // Optional: Display a message if the mark is less than 40
        printf("Result :you are not Eligible for Voting \n");
    }

    return 0; 
}