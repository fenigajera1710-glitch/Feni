#include <stdio.h>
int fib(int n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}
void printFib(int n, int i) {
    if (i > n) return;
    printf("%d ", fib(i));
    printFib(n, i + 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printFib(n, 1);
    return 0;
}
