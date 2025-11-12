#include <stdio.h>
int isPrime(int n, int i) {
    if (n <= 1) return 0;
    if (i * i > n) return 1;
    if (n % i == 0) return 0;
    return isPrime(n, i + 1);
}
void printPrimes(int n) {
    if (n > 500) return;
    if (isPrime(n, 2)) printf("%d ", n);
    printPrimes(n + 1);
}
int main() {
    printPrimes(1);
    return 0;
}
