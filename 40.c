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
        // print increasing letters A..(A+i-1)
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        // print decreasing letters back down to A
        ch -= 2; // step back one before the last printed letter
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}
