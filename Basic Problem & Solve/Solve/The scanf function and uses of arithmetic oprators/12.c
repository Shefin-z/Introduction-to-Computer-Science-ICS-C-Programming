#include <stdio.h>

int main() {
    int amount, notes1, notes5, notes10, notes50, notes100, notes500;

    // Input the amount of money
    printf("Enter the amount of money: ");
    scanf("%d", &amount);

    // Calculate the number of each note
    notes500 = amount / 500;
    amount %= 500;

    notes100 = amount / 100;
    amount %= 100;

    notes50 = amount / 50;
    amount %= 50;

    notes10 = amount / 10;
    amount %= 10;

    notes5 = amount / 5;
    amount %= 5;

    notes1 = amount;

    // Print the number of each note
    printf("To provide %d units of money, you need:\n", amount);
    printf("500 unit notes: %d\n", notes500);
    printf("100 unit notes: %d\n", notes100);
    printf("50 unit notes: %d\n", notes50);
    printf("10 unit notes: %d\n", notes10);
    printf("5 unit notes: %d\n", notes5);
    printf("1 unit notes: %d\n", notes1);

    return 0;
}

