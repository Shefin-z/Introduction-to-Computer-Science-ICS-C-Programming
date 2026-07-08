#include <stdio.h>

int main() {
    int a, b, c, d;

    // Input values for the variables
    printf("Enter the value of 'a': ");
    scanf("%d", &a);

    printf("Enter the value of 'b': ");
    scanf("%d", &b);

    printf("Enter the value of 'c': ");
    scanf("%d", &c);

    printf("Enter the value of 'd': ");
    scanf("%d", &d);

    // Calculate the expression
    int result = a * b + (a - c) / d + b;

    // Print the result
    printf("Result: %d * %d + (%d - %d) / %d + %d = %d\n", a, b, a, c, d, b, result);

    return 0;
}

