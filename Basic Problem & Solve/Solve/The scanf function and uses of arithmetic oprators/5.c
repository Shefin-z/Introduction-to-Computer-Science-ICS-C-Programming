#include <stdio.h>

int main() {
    float a, b, c, d;

    // Input values for the variables
    printf("Enter the value of 'a': ");
    scanf("%f", &a);

    printf("Enter the value of 'b': ");
    scanf("%f", &b);

    printf("Enter the value of 'c': ");
    scanf("%f", &c);

    printf("Enter the value of 'd': ");
    scanf("%f", &d);

    // Calculate the expression
    float result = ((a + b - c) * d) - (a / d);

    // Print the result
    printf("Result: ((%.2f + %.2f - %.2f) * %.2f) - (%.2f / %.2f) = %f\n", a, b, c, d, a, d, result);

    return 0;
}

