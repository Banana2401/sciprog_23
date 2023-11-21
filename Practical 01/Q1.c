#include <stdio.h>

// Function to calculate the determinant of a 3x3 matrix
double determinant3x3(double a, double b, double c, double d, double e, double f, double g, double h, double i) {
    return a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
}

// Function to calculate the determinant of a 4x4 matrix using Cramer's rule
double caldet4x4(double matrix[4][4]) {
    double det = 0.0;

    for (int i = 0; i < 4; i++) {
        det += matrix[0][i] * (
            matrix[1][(i + 1) % 4] * (matrix[2][(i + 2) % 4] * matrix[3][(i + 3) % 4] -
                                    matrix[2][(i + 3) % 4] * matrix[3][(i + 2) % 4])
            );
    }

    return det;
}

int main() {
    int n = 4;
    double Matrix[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Matrix[i][j] = 1.0 / (i + j + 1);
        }
    }

    // Output the 4x4 matrix
    printf("4x4 matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.3lf\t", Matrix[i][j]);
        }
        printf("\n");
    }
    
   // Calculate the determinant of the 4x4 matrix
    double det4x4 = caldet4x4(Matrix);
    printf("Determinant of the 4x4 matrix is: %.3lf\n", det4x4);

    return 0;
}
