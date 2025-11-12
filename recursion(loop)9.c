#include <stdio.h>
int sumEven(int n) {
    if(n == 0) return 0;
    return (2*n) + sumEven(n - 1);
}
int main() {
    int n; scanf("%d", &n);
    printf("Sum = %d", sumEven(n));
    return 0;
}
