#include <stdio.h>

int main() {
    double radius, area;

    // Input the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area using the formula: area = pi * radius * radius
    area = 3.14159 * radius * radius;

    // Print the calculated area
    printf("The area of the circle with a radius of %.2f is %f square units.\n", radius, area);

    return 0;
}

