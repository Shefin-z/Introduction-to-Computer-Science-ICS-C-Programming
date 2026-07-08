#include <stdio.h>
#include <math.h>

int main() {
    double a, b, result;

    // Input the values of 'a' and 'b'
    printf("Enter the value of 'a': ");
    scanf("%lf", &a);

    printf("Enter the value of 'b': ");
    scanf("%lf", &b);

    // Calculate a^b using the pow function from math.h
    result = pow(a, b);

    // Print the result
    printf("%.2f ^ %.2f = %.2f\n", a, b, result);

    return 0;
}

