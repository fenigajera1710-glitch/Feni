#include <stdio.h>
int isPrime(int n, int i) {
    if (n <= 1) return 0;
    if (i * i > n) return 1;
    if (n % i == 0) return 0;
    return isPrime(n, i + 1);
}
int countPrimes(int n) {
    if (n > 500) return 0;
    if (isPrime(n, 2))
        return 1 + countPrimes(n + 1);
    else
        return countPrimes(n + 1);
}
int main() {
    printf("Count = %d", countPrimes(1));
    return 0;
}
