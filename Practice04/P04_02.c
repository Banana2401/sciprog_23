//Create a function/subroutine that calculates the area under the curve of tan(x) from 0 ¡ú 60
//degrees using the Trapezoidal Rule. (You did this last week)
#include<stdio.h>
#include<math.h>

// Function prototype for converting degrees to radians
double degtorad(double deg);

// Function prototype for the trapezoidal rule
double traprule(int N);

int main() {
    // Set the number of intervals for the trapezoidal rule
    int N = 12;

    // Calculate the approximate integral using the trapezoidal rule
    double integral_approx = traprule(N);

    // Calculate the exact integral
    double integral_exact = log(2.0);

    // Print the results
    printf("Your approximation of the integral from x=0 degrees to x=60 degrees of the function tan(x) with respect to x is : \n%.5f\n The exact solution is : \n%.5f\n", integral_approx, integral_exact);

    return 0;
}

// Function to convert degrees to radians
double degtorad(double deg) {
    return (deg * M_PI) / 180.0;
}

// Function to apply the trapezoidal rule for the integral of tan(x) from 0 to 60 degrees
double traprule(int N) {
    // Declare variables
    int i;
    double TanValues[N + 1], deg, rad, width;

    // Calculate tan(x) for equidistant angles in degrees
    for (i = 0; i <= N; i++) {
        deg = i * 5.0;
        rad = degtorad(deg);
        TanValues[i] = tan(rad);
    }

    // Initialize the area with the values at the endpoints
    double area = TanValues[0] + TanValues[N];

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
