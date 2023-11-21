#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double a, r;
    
    for (int test = 1; test <= 3; test++) {
        switch (test) {
            case 1:
                n = 10000;
                a = 2.0;
                r = 0.01;
                break;
            case 2:
                n = 500;
                a = 0.01;
                r = 1.1;
                break;
            case 3:
                n = 100;
                a = 0.0001;
                r = 2.0;
                break;
            default:
                printf("Invalid test case number.\n");
                return 1;
        }
        
        // Calculate Sn using the summation (middle).
        double sum = 0.0;
        for (int i = 0; i <= n; i++) {
            sum += a * pow(r, i);
        }
        
        // Calculate Sn using the formula (right).
        double formula_result = (a * (1 - pow(r, n + 1))) / (1 - r);
        
        // Print the results for the current test case.
        printf("Test Case %d:\n", test);
        printf("Sn (Summation): %lf\n", sum);
        printf("Sn (Formula): %lf\n", formula_result);
        
        // Compare the results and print the difference.
        double difference = fabs(sum - formula_result);
        printf("Difference: %lf\n\n", difference);
    }
    
    return 0;
}


//Test Case 1:For this case, both the summation and formula methods give the same result, which is expected. The difference is 0, indicating that they match perfectly.
//Test Case 2:For this case, there is a significant difference between the results obtained from the summation and the formula methods. The difference is 8192. Because when dealing with large numbers of n and r, floating-point precision becomes an issue, and there might be some loss of precision in the summation method.
//Test Case 3: Similarly to Case 2, there's a huge difference between the results from the summation and formula methods, which is 34,359,738,368. This difference arises from the same precision issue.
//In summary, the results of the summation method and the formula method match closely for Case 1, but for Cases 2 and 3, the large values of n and r lead to differences due to floating-point precision.