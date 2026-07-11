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

    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);

    d = d % n; // handle d > n

    int temp[n];

    // Shift each element to (i + d) % n position
    for (int i = 0; i < n; i++) {
        temp[(i + d) % n] = arr[i];
    }

    printf("Right rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}