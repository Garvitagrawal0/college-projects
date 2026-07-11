#include <stdio.h>

int main() {
    int num, binary[32], count = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        binary[count] = num % 2;
        num /= 2;
        count++;
    }

    printf("Binary: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}