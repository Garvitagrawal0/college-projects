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

    printf("Duplicate elements: ");
    int foundAny = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicateAlreadyPrinted = 0;

        // check if arr[i] appeared before index i (avoid reprinting same duplicate)
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                isDuplicateAlreadyPrinted = 1;
                break;
            }
        }

        if (isDuplicateAlreadyPrinted) continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                foundAny = 1;
                break;
            }
        }
    }

    if (!foundAny) {
        printf("None");
    }
    printf("\n");

    return 0;
}