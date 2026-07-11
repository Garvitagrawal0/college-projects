#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, digit, position = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;
        decimal += digit * pow(2, position);
        binary /= 10;
        position++;
    }

    printf("Decimal: %d\n", decimal);
    return 0;
}