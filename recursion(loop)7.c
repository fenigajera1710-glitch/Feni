#include <stdio.h>
int sumNat(int n) {
    if(n == 0) return 0;
    return n + sumNat(n - 1);
}
int main() {
    int n; scanf("%d", &n);
    printf("Sum = %d", sumNat(n));
    return 0;
}
