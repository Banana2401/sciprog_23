// main.c
#include <stdio.h>
#include "P06_01.h"

int main() {
    // Define matrix dimensions
    int n = 5, p = 3, q = 4;
    
    // Declare matrices A, B, and C
    double A[n][p], B[p][q], C[n][q];
    
    // Declare loop counters
    int i, j;

    // Initialize matrix A
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            A[i][j] = i + j;
        }
    }

    // Initialize matrix B
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            B[i][j] = i - j;
        }
    }

    // Perform matrix multiplication
    matmult(n, p, q, A, B, C);

    // Print out matrix A
    printf("This is matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%3.1f ", A[i][j]);
        }
        printf("\n");
    }

    // Print out matrix B
    printf("\nThis is matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%3.1f ", B[i][j]);
        }
        printf("\n");
    }

    // Print out resulting matrix C
    printf("\nThis is matrix C:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            printf("%3.1f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
