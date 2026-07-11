#include <stdio.h>

// Helper function using an accumulator to build the reversed number
int reverseHelper(int num, int reversed) {
    if (num == 0) {
        return reversed; // base case
    }
    return reverseHelper(num / 10, reversed * 10 + num % 10);
}

int main() {
    int num, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    int isNegative = (num < 0);
    if (isNegative) num = -num;

    int reversed = reverseHelper(num, 0);
    if (isNegative) reversed = -reversed;

    printf("Reversed number = %d\n", reversed);
    return 0;
}