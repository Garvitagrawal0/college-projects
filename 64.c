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

    int result[n];
    int resultSize = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        // check if arr[i] already exists in result
        for (int k = 0; k < resultSize; k++) {
            if (result[k] == arr[i]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            result[resultSize] = arr[i];
            resultSize++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}