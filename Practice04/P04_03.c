#include<stdio.h>
#include<math.h>

// Global variables
int N = 12;
double TanValues[13];

// Function prototype for converting degrees to radians
double degtorad(double deg);

// Function prototype for the trapezoidal rule
double traprule(int N);

int main() {
    // Declare variables
    int i;
    double deg, rad;

    // Calculate tan(x) for equidistant angles in degrees
    for (i = 0; i <= N; i++) {
        deg = i * 5.0;
        rad = degtorad(deg);
        TanValues[i] = tan(rad);
        // Uncomment the following line if you want to print the calculated tan values
        // printf("TanValues[%d] = %f at x=%.2f degrees\n", i, TanValues[i], deg);
    }

    // Calculate the approximate integral using the trapezoidal rule
    double integral_approx = traprule(N);

    // Calculate the exact integral
    double integral_exact = log(2.0);

    // Print the results
    printf("Your approximation of the integral from x=0 degrees to x=60 degrees of the function tan(x) with respect to x is : \n%.5f\n The exact solution is : \n%.5f\n", integral_approx, integral_exact);
}

// Function to convert degrees to radians
double degtorad(double deg) {
    return (deg * M_PI) / 180.0;
}

// Function to apply the trapezoidal rule for the integral of tan(x) from 0 to 60 degrees
double traprule(int N) {
    // Declare variables
    int i;
    double width, area = TanValues[0] + TanValues[N];

    // Accumulate 2 * tan(x) for the remaining points
    for (i = 1; i < N; i++) {
        area += 2.0 * TanValues[i];
    }

    // Calculate the width of each subinterval
    width = degtorad((60.0 - 0) / (2.0 * N));

    // Calculate the final area using the trapezoidal rule formula
    area = width * area;

    return area;
}
