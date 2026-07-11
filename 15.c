#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, numDigits = 0;
    long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }

    return 0;
}