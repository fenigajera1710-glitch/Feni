#include <stdio.h>
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("Digits = %d", countDigits(n));
    return 0;
}
