#include <stdio.h>
#include <math.h>

int main() {
    double u, a, s, v;

    // Input the values of 'u', 'a', and 's'
    printf("Enter the initial velocity (u) in m/s: ");
    scanf("%lf", &u);

    printf("Enter the acceleration (a) in m/s^2: ");
    scanf("%lf", &a);

    printf("Enter the displacement (s) in meters: ");
    scanf("%lf", &s);

    // Calculate the terminal velocity using the equation
    v = sqrt(u * u + 2 * a * s);

    // Print the calculated terminal velocity
    printf("The terminal velocity (v) is approximately %.2f m/s.\n", v);

    return 0;
}

