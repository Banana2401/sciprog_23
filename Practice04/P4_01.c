#include<stdio.h>
#include<math.h>

// Function prototype for converting degrees to radians
double degtorad(double deg);

int main(){

  // Initialize variables
  int N = 12, i;
  double TanValues[N+1], deg, rad;

  // Loop to calculate tan values for equidistant angles
  for(i = 0; i <= N; i++){
    // Calculate the angle in degrees
    deg = i * 5.0;
    
    // Convert the angle to radians using the degtorad function
    rad = degtorad(deg);
    
    // Calculate and store the tan value for the angle
    TanValues[i] = tan(rad);
    
    // Print the results
    printf("TanValues[%d] = %f at x=%.2f degrees\n", i, TanValues[i], deg);
  }
  
  return 0;
}

// Function definition for converting degrees to radians
double degtorad(double deg){
  return (deg * M_PI) / 180.0;
}
