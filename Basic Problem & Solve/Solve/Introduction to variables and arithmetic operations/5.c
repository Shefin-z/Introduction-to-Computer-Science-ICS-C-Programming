#include <stdio.h>

int main() {
    // Declare and initialize four floating-point variables
    float a = 2.3;
    float b = 5.8;
    float c = 1.1;
    float d = 3.5;

    // Calculate the expression
    float result = ((a + b - c) * d) - (a / d);

    // Print the result
    printf("Result: ((%.2f + %.2f - %.2f) * %.2f) - (%.2f / %.2f) = %f\n", a, b, c, d, a, d, result);

    return 0;
}

