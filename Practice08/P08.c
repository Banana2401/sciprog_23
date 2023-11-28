#include<stdio.h>

// Function to calculate GCD using iteration
int gcd_iteration(int a, int b) {
   int temp;
   while (b != 0) {
     temp = b;
     b = a % b;
     a = temp;
   }
   return a;
}

// Function to calculate GCD using recursion
int gcd_recursive(int a, int b) {
   if (b == 0) {
     return a;
   } else {
     return gcd_recursive(b, a % b);
   }
}
  
int main(void) {
   // Declare variables
   int a = 7;
   int b = 56;
    
   // Calculate GCD using iteration
   int ans_i = gcd_iteration(a, b);

   // Calculate GCD using recursion
   int ans_r = gcd_recursive(a, b);

   // Print results
   printf("Using iteration, we get the answer: %d\n", ans_i);
   printf("Using recursion, we get the answer: %d\n", ans_r); 

   return 0;
}
