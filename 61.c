#include <stdio.h>

int main() {
    int n;

    printf("Enter n (array will have n-1 elements from 1 to n with one missing): ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    // Expected sum of 1..n minus actual sum of array = missing number
    long expectedSum = (long)n * (n + 1) / 2;
    long actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    printf("Missing number = %ld\n", expectedSum - actualSum);

    return 0;
}