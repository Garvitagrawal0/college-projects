#include <stdio.h>

long long power(int x, int n) {
    long long result = 1;

    if (n < 0) {
        return 0; // or handle fractional result separately for negative n
    }

    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }

    return result;
}

int main() {
    int x, n;

    printf("Enter base (x) and exponent (n): ");
    scanf("%d %d", &x, &n);

    printf("%d^%d = %lld\n", x, n, power(x, n));
    return 0;
}