#include <stdio.h>
int isPrime(int n, int i) {
    if (n <= 1) return 0;
    if (i * i > n) return 1;
    if (n % i == 0) return 0;
    return isPrime(n, i + 1);
}
int sumPrimes(int n) {
    if (n > 500) return 0;
    if (isPrime(n, 2))
        return n + sumPrimes(n + 1);
    else
        return sumPrimes(n + 1);
}
int main() {
    printf("Sum = %d", sumPrimes(1));
    return 0;
}
