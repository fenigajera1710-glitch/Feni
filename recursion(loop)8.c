#include <stdio.h>
int sumOdd(int n) {
    if(n == 0) return 0;
    return (2*n - 1) + sumOdd(n - 1);
}
int main() {
    int n; scanf("%d", &n);
    printf("Sum = %d", sumOdd(n));
    return 0;
}
