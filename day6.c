/*
=========================================================
Day 6

Q21. Convert Decimal to Binary
Company: TCS, Infosys, Wipro

Q22. Convert Binary to Decimal
Company: TCS, Infosys, Wipro

Q23. Count Set Bits in a Number
Company: TCS, Infosys, Wipro

Q24. Find x^n without pow()
Company: TCS, Infosys, Wipro
=========================================================
*/

#include <stdio.h>

int main()
{
    int choice;

    printf("\n===== MENU =====\n");
    printf("21. Decimal to Binary\n");
    printf("22. Binary to Decimal\n");
    printf("23. Count Set Bits\n");
    printf("24. Find x^n without pow()\n");
    printf("Enter Question Number (21-24): ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q21 Decimal to Binary
        case 21:
        {
            int n, binary[32], i = 0;

            printf("Enter Decimal Number: ");
            scanf("%d", &n);

            if(n == 0)
            {
                printf("Binary = 0\n");
                break;
            }

            while(n > 0)
            {
                binary[i++] = n % 2;
                n /= 2;
            }

            printf("Binary = ");
            for(int j = i - 1; j >= 0; j--)
                printf("%d", binary[j]);

            printf("\n");
            break;
        }

        // Q22 Binary to Decimal
        case 22:
        {
            long long binary;
            int decimal = 0, base = 1, rem;

            printf("Enter Binary Number: ");
            scanf("%lld", &binary);

            while(binary > 0)
            {
                rem = binary % 10;
                decimal += rem * base;
                base *= 2;
                binary /= 10;
            }

            printf("Decimal = %d\n", decimal);
            break;
        }

        // Q23 Count Set Bits
        case 23:
        {
            int n, count = 0;

            printf("Enter Number: ");
            scanf("%d", &n);

            while(n > 0)
            {
                count += n & 1;
                n >>= 1;
            }

            printf("Set Bits = %d\n", count);
            break;
        }

        // Q24 Find x^n without pow()
        case 24:
        {
            int x, n;
            long long result = 1;

            printf("Enter Base (x): ");
            scanf("%d", &x);

            printf("Enter Power (n): ");
            scanf("%d", &n);

            for(int i = 1; i <= n; i++)
                result *= x;

            printf("%d^%d = %lld\n", x, n, result);
            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}