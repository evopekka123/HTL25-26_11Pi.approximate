#include <stdio.h>

int main(void) {
    long long n;         // Number of rectangles (the more, the more accurate)
    double width;        // Width of each rectangle (Δx)
    double x;            // Current x position
    double sum = 0.0;    // Accumulator for undersum
    double pi;           // Resulting approximation of π

    // Ask the user for the number of intervals
    printf("Enter number of intervals (e.g. 1000000): ");
    scanf("%lld", &n);

    // Compute the width of each rectangle
    width = 1.0 / n;

    // Left Riemann sum (undersum)
    for (long long i = 0; i < n; i++) {
        x = i * width;                   // left edge of rectangle
        sum += 1.0 / (1.0 + x * x);      // height of rectangle f(x)
    }

    // Multiply by 4 and Δx to approximate π
    pi = 4.0 * width * sum;

    printf("\nApproximated value of PI = %.15f\n", pi);
    printf("Actual value of PI ≈ 3.141592653589793\n");
    printf("Error = %.15e\n", pi - 3.141592653589793);

    return 0;
}