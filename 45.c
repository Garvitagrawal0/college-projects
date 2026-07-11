#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num) {
    int original = num, reversed = 0, digit;

    num = abs(num);

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (abs(original) == reversed);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a Palindrome number.\n", num);
    } else {
        printf("%d is NOT a Palindrome number.\n", num);
    }

    return 0;
}