#include <stdio.h>
int sumFactors(int n, int i) {
    if (i > n / 2) return 0;
    if (n % i == 0)
        return i + sumFactors(n, i + 1);
    else
        return sumFactors(n, i + 1);
}
int main() {
    int n;
    scanf("%d", &n);
    if (n == sumFactors(n, 1))
        printf("Perfect Number");
    else
        printf("Not Perfect");
    return 0;
}
