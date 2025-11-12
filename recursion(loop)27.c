#include <stdio.h>
void factors(int n, int i) {
    if (i > n) return;
    if (n % i == 0) printf("%d ", i);
    factors(n, i + 1);
}
int main() {
    int n;
    scanf("%d", &n);
    factors(n, 1);
    return 0;
}
