#include <stdio.h>

int main() {
    // Declare and initialize two floating-point variables
    float num1 = 95.401;
    float num2 = 22.622;

    // Perform basic arithmetic operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float division = num1 / num2;

    // Print the results
    printf("Sum: %.2f + %.2f = %f\n", num1, num2, sum);
    printf("Difference: %.2f - %.2f = %f\n", num1, num2, difference);
    printf("Product: %.2f * %.2f = %f\n", num1, num2, product);
    printf("Division: %.2f / %.2f = %f\n", num1, num2, division);

    return 0;
}

