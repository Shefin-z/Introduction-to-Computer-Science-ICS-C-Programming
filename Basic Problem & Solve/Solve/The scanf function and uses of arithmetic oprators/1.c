#include <stdio.h>

int main() {
    int integerVariable;
    float floatVariable;

    // Input integer
    printf("Enter an integer: ");
    scanf("%d", &integerVariable);

    // Input floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &floatVariable);

    // Print the values
    printf("You entered the integer: %d\n", integerVariable);
    printf("You entered the floating-point number: %f\n", floatVariable);

    return 0;
}

