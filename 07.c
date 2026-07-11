#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = abs(num);

    if (num == 0) {
        product = 0; // digit of 0 makes product 0
    } else {
        while (num != 0) {
            digit = num % 10;
            product *= digit;
            num /= 10;
        }
    }

    printf("Product of digits = %d\n", product);
    return 0;
}