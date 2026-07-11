#include <stdio.h>

int main() {
    int n, d;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    d = d % n; // handle d > n

    int temp[n];

    // Copy elements from index d onwards, then wrap around
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + d) % n];
    }

    printf("Left rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}