// matmult.c
#include "P06_01.h"

// Function to perform matrix multiplication: C = A * B
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]) {
    // Loop counters
    int i, j, k;

    // Perform matrix multiplication
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            // Initialize the element in C to 0
            C[i][j] = 0.0;

            // Iterate over the common dimension (p) for the matrices A and B
            for (k = 0; k < p; k++) {
                // Accumulate the product of corresponding elements
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
