#include <stdio.h>

int main() {
    int num, i, pos = 0, neg = 0, zero = 0;

    printf("Enter 200 numbers:\n");
    for (i = 1; i <= 200; i++) {
        scanf("%d", &num);
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }

    printf("\nPositive numbers: %d", pos);
    printf("\nNegative numbers: %d", neg);
    printf("\nZeroes: %d", zero);

    return 0;
}
