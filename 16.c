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
    int start, end;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}