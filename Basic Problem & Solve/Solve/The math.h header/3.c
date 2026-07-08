#include <stdio.h>
#include <math.h>

int main() {
    double angleInRadians, sineValue, cosineValue, tangentValue;

    // Input the angle in radians
    printf("Enter the angle in radians: ");
    scanf("%lf", &angleInRadians);

    // Calculate the sine, cosine, and tangent using the math functions
    sineValue = sin(angleInRadians);
    cosineValue = cos(angleInRadians);
    tangentValue = tan(angleInRadians);

    // Print the results
    printf("Sine of %.2f radians is %.2f\n", angleInRadians, sineValue);
    printf("Cosine of %.2f radians is %.2f\n", angleInRadians, cosineValue);
    printf("Tangent of %.2f radians is %.2f\n", angleInRadians, tangentValue);

    return 0;
}

