/* Find e using Taylor series expansion for e^x */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function to calculate the factorial of a number
int factorial(int n);

int main(void) {
  // Declare variables
  int i, order;
  double e, *terms;

  // Enter polynomial order
  printf("Enter the required polynomial order: ");
  
  // Check if a valid integer is entered
  if (scanf("%d", &order) != 1) {
    printf("Didn't enter a number.\n");
    return 1;
  }

  // Allocate space for storing terms
  terms = (double *)malloc(order * sizeof(double));

  // Calculate and print individual terms
  for (i = 0; i < order; i++) {
    terms[i] = 1.0 / factorial(i + 1);
    printf("e term for order %d is %1.14lf.\n", i + 1, terms[i]); // Corrected typo in "term[i]"
  }

  // Initialize e
  e = 1.0;

  // Sum up the terms to estimate e
  for (i = 0; i < order; i++) {
    e = e + terms[i]; // Corrected typo in "terms[i]"
  }

  // Free allocated memory
  free(terms);

  // Print the estimated value of e and the difference from the actual value
  printf("e is estimated as %.10lf, with a difference %e\n", e, e - exp(1.0));

  return 0;
}

// Function to calculate the factorial of a number
int factorial(int n) {
  // Check for invalid input
  if (n < 0) {
    printf("Error: Negative number passed to factorial.\n");
    return -1;
  } 
  // Base case: 0! is 1
  else if (n == 0) {
    return 1;
  } 
  // Recursive case: n! = n * (n-1)!
  else {
    return n * factorial(n - 1);
  }
}
