#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int numDigits = 0, temp = num;
    long sum = 0;

    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }

    return 0;
}