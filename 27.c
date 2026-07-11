#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int num) {
    if (num == 0) {
        return 0; // base case
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = abs(num); // handle negative numbers

    printf("Sum of digits = %d\n", sumOfDigits(num));
    return 0;
}