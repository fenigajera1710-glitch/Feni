#include <stdio.h>
int power(int n) {
    if (n == 0) return 0;
    return 1 + power(n / 10);
}
int pow10(int p) {
    if (p == 0) return 1;
    return 10 * pow10(p - 1);
}
int isAutomorphic(int n) {
    int sq = n * n;
    int digits = pow10(power(n));
    return (sq % digits == n);
}
int main() {
    int n;
    scanf("%d", &n);
    if (isAutomorphic(n))
        printf("Automorphic");
    else
        printf("Not Automorphic");
    return 0;
}
