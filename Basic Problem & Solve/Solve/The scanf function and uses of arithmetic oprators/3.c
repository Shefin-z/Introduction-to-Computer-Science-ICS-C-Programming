#include <stdio.h>

int main() {
    float num1, num2;

    // Input the first floating-point number
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    // Input the second floating-point number
    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

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

