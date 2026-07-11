#include <stdio.h>

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d\n", findMax(num1, num2));
    return 0;
}