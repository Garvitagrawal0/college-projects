#include <stdio.h>

int main() {
    long long num;
    long long largestPrime = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Divide out all factors of 2 first
    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    // num must be odd now, check odd factors from 3 onwards
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    // If remaining num is > 2, it's prime itself
    if (num > 2) {
        largestPrime = num;
    }

    printf("Largest prime factor = %lld\n", largestPrime);
    return 0;
}