#include <stdio.h>

int main(void) {
    // Declare variables
    int i;
    double a;

    // Enter information from the user
    printf("Enter an int and double:\n");
    
    // Read user input: %d expects an integer, %lf expects a double
    scanf("%d %lf", &i, &a);

    // Print the entered values
    printf("You entered: %d and %lf\n", i, a);

    // Indicate successful program execution by returning 0
    return 0;
}
