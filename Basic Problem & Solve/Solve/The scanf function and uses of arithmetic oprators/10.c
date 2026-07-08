#include <stdio.h>

int main() {
    int heightInInches, feet, inches;

    // Input the height in inches
    printf("Enter the height of the object in inches: ");
    scanf("%d", &heightInInches);

    // Calculate feet and inches
    feet = heightInInches / 12;  // 1 foot = 12 inches
    inches = heightInInches % 12;

    // Print the height in feet-inch format
    printf("The height is %d foot(s) and %d inch(es).\n", feet, inches);

    return 0;
}

