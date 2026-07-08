#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int num1 = 18;
    int num2 = 7;

    // Perform basic arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int division = num1 / num2;
    int remainder = num1 % num2;

    // Print the results
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Difference: %d - %d = %d\n", num1, num2, difference);
    printf("Product: %d * %d = %d\n", num1, num2, product);
    printf("Division: %d / %d = %d\n", num1, num2, division);
    printf("Remainder: %d %% %d = %d\n", num1, num2, remainder);

    return 0;
}

