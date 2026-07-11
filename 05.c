#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = abs(num); // handle negative numbers

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}