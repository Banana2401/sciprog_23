#include <stdio.h>
#include <stdlib.h>

// Function declaration/prototype
// Input arguments: Fn-1 and Fn-2
// On exit: Fn and Fn-1
void fibonacci(int *a, int *b);

int main() {
    // Declare variables
    int n, i;
    int fo = 0, f1 = 1;

    // Prompt user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the entered number is positive
    if (n < 1) {
        printf("The number is not positive.\n");
        exit(1);
    }

    // Print the first two Fibonacci numbers
    printf("The Fibonacci sequence is:\n");
    printf("%d, %d, ", fo, f1);

    // Calculating and printing Fibonacci sequence starting from the third number
    for (i = 2; i <= n; i++) {
        fibonacci(&f1, &fo);
        printf("%d, ", f1);

        // Print a newline every 10 numbers for better readability
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}

// Function to calculate the next Fibonacci number
void fibonacci(int *a, int *b) {
    // Calculate the next Fibonacci number
    int next = *a + *b;

    // Update variables to represent the next two Fibonacci numbers
    *b = *a;
    *a = next;
}
