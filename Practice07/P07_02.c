#include <stdio.h>
#include <stdlib.h>

// Function to allocate an array of integers
int *allocateArray(int n) {
  int *p;
  p = (int *)malloc(n * sizeof(int));
  return p;
}

// Function to fill the array with ones
void fillWithOnes(int *array, int n) {
  int i;
  for (i = 0; i < n; i++) {
    array[i] = 1;
  }
}

// Function to print the array
void printArray(int *array, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d]: %d\n", i, array[i]);
  }
}

// Function to deallocate the array
void freeArray(int *array) {
  free(array);
}

int main() {
  // Declare variables
  int n, *a;

  // Prompt user for the size of the array
  printf("Size of the array: ");
  scanf("%d", &n);

  // Allocate memory for the array
  a = allocateArray(n);

  // Fill the array with ones
  fillWithOnes(a, n);

  // Print the array
  printArray(a, n);

  // Deallocate the array
  freeArray(a);

  // Set the pointer to NULL to avoid dangling pointer
  a = NULL;

  return 0;
}
