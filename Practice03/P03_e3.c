#include <stdio.h>
#include <math.h>

int main(){

    // Initialize the end-points and the number of points
    int N = 12;
    double x_0 = 0.0;
    double x_12 = M_PI/3.0;
    double width = (x_12 - x_0)/(double)N;

    // Get values of f(x) = tan(x) for the end-points, and add them up
    double X = tan(x_0) + tan(x_12);

    // Get equidistant points, evaluate tan at these points, store 2tan(x) at each step
    double x;
    double y;
    double sum = X;

    // Loop to generate equidistant points and accumulate 2tan(x) at each step
    int i;
    for(i = 1; i < 12; i++){
        // Calculate the next equidistant point
        x = x_0 + width * i;
        
        // Evaluate tan at the current point
        y = tan(x);
        
        // Accumulate 2 * tan(x) at each step
        sum = sum + 2 * y;
    }

    // Calculate the approximate integral using the trapezoidal rule
    double integral_approx = sum * width * 0.5;
    // Calculate the exact integral
    double integral_exact = log(2.0);

    // Print the results
    printf("Your approximation of the integral from x=0 to x=pi/3 of the function tan(x) with respect to x is: \n%.5f\n The exact solution is: \n%.5f\n", integral_approx, integral_exact);

    // Indicate successful program execution by returning 0
    return 0;
}
