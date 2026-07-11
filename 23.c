#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    while (num > 0) {
        count += num & 1;  // check last bit
        num >>= 1;         // shift right by 1
    }

    printf("Number of set bits = %d\n", count);
    return 0;
}