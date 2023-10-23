#include <stdio.h>
#include <math.h>

// Define the function for which you want to calculate errors
double userFunction(double x) {
    return x * x - 4; // Example function: f(x) = x^2 - 4
}

int main() {
    double trueValue, approximateValue, x;

    // Input the true value and the value obtained from the function
    printf("Enter the true value: ");
    scanf("%lf", &trueValue);
    
    // Input the value obtained from the function
    printf("Enter the value obtained from the function: ");
    scanf("%lf", &x);
    
    approximateValue = userFunction(x); // Calculate the approximate value

    // Calculate absolute error
    double absoluteError = fabs(trueValue - approximateValue);

    // Calculate relative error
    double relativeError = absoluteError / fabs(trueValue);

    // Calculate percentage error
    double percentageError = relativeError * 100.0;

    // Display the results
    printf("True Value: %lf\n", trueValue);
    printf("Approximate Value: %lf\n", approximateValue);
    printf("Absolute Error: %lf\n", absoluteError);
    printf("Relative Error: %lf\n", relativeError);
    printf("Percentage Error: %lf%%\n", percentageError);

    return 0;
}
