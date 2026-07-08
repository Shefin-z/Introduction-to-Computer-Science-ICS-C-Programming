#include <stdio.h>

int main() {
    int num1, num2;

    // Input the first integer
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Input the second integer
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform basic arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int division = num1 / num2;
    int remainder = num1 % num2;

    // Print the results
    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, difference);
    printf("%d * %d = %d\n", num1, num2, product);
    printf("%d / %d = %d\n", num1, num2, division);
    printf("%d %% %d = %d\n", num1, num2, remainder);

    return 0;
}

