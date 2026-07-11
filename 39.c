#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print increasing numbers 1..i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // print decreasing numbers (i-1)..1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
