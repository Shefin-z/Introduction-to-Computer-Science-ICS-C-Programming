#include <stdio.h>

int main() {
    // Declare and initialize four integer variables
    int a = 21;
    int b = 15;
    int c = 34;
    int d = 6;

    // Calculate the expression
    int result = a * b + (a - c) / d + b;

    // Print the result
    printf("Result: %d * %d + (%d - %d) / %d + %d = %d\n", a, b, a, c, d, b, result);

    return 0;
}

