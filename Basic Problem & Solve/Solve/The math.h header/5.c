#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Input the coefficients 'a', 'b', and 'c'
    printf("Enter the coefficient 'a': ");
    scanf("%lf", &a);

    printf("Enter the coefficient 'b': ");
    scanf("%lf", &b);

    printf("Enter the coefficient 'c': ");
    scanf("%lf", &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the discriminant to determine the nature of the roots
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}

