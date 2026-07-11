#include <stdio.h>

int main() {
    int num, reversed = 0, digit;
    int original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    int isNegative = (num < 0);
    if (isNegative) num = -num;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (isNegative) reversed = -reversed;

    printf("Reversed number = %d\n", reversed);
    return 0;
}

