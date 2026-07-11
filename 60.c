#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int insertPos = 0;

    // Step 1: move all non-zero elements to the front, preserving order
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[insertPos] = arr[i];
            insertPos++;
        }
    }

    // Step 2: fill the rest with zeroes
    for (int i = insertPos; i < n; i++) {
        arr[i] = 0;
    }

    printf("Array after moving zeroes to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}