#include<stdio.h>
#include<math.h>

// Function prototype for calculating arctan using Maclaurin series
double arctanh1(const double x, const double delta);

// Function prototype for calculating arctanh using the logarithmic formula
double arctanh2(const double x);

int main() {
    // Declare variables
    double delta, x;

    // Prompt user to enter the precision for the Maclaurin series
    printf("Enter the precision for the Maclaurin series:\n");
    scanf("%lf", &delta);

    // Declare arrays to store the results
    int length = 1000;
    double tan1[length]; // storing the result of arctan1
    double tan2[length]; // storing the result of arctan2

    // Initialize array index
    int j = 0;

    // Iterate through values of x
    x = -0.9;
    while (x <= 0.9 && j < length) {
        // Calculate arctan using Maclaurin series
        tan1[j] = arctanh1(x, delta);

        // Calculate arctanh using the logarithmic formula
        tan2[j] = arctanh2(x);

        // Print the difference between the two results
        printf("The difference at x=%lf between them is %.10lf.\n", x, fabs(tan1[j] - tan2[j]));

        // Increment array index and update x
        j++;
        x = x + 0.1; // try with 0.01 as well
    }

    return 0;
}

// Function to calculate arctan using Maclaurin series
double arctanh1(const double x, const double delta) {
    // Initialize variables
    double arcTan = 0; // approximation
    double elem, val; // element in the series
    int n = 0; // sum parameter

    // Iterate until the difference between consecutive elements is smaller than delta
    do {
        val = 2 * n + 1;
        elem = pow(x, val) / val;
        arcTan += elem;
        n++;
    } while (fabs(elem) >= delta);

    return arcTan;
}

// Function to calculate arctanh using the logarithmic formula
double arctanh2(const double x) {
    return (log(1 + x) - log(1 - x)) / 2;
}
