#include <stdio.h>
#include <math.h>

int main() {
    double inputNumber;

    // Input the floating-point number
    printf("Enter a floating-point number: ");
    scanf("%lf", &inputNumber);

    // Calculate the floor and ceiling
    double floorValue = floor(inputNumber);
    double ceilValue = ceil(inputNumber);

    // Print the floor and ceiling
    printf("Floor of %.2f is %.2f\n", inputNumber, floorValue);
    printf("Ceiling of %.2f is %.2f\n", inputNumber, ceilValue);

    return 0;
}

