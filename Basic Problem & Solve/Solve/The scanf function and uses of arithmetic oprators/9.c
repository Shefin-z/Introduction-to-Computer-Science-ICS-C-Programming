#include <stdio.h>

int main() {
    int heightInCentimeters, meters, centimeters;

    // Input the height in centimeters
    printf("Enter the height of the object in centimeters: ");
    scanf("%d", &heightInCentimeters);

    // Calculate meters and centimeters
    meters = heightInCentimeters / 100;  // 1 meter = 100 centimeters
    centimeters = heightInCentimeters % 100;

    // Print the height in meter-centimeter format
    printf("The height is %d meter(s) and %d centimeter(s).\n", meters, centimeters);

    return 0;
}

