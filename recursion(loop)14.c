#include <stdio.h>
int sumValues(int n) {
    int x;
    if(n == 0) return 0;
    scanf("%d", &x);
    return x + sumValues(n - 1);
}
int main() {
    int s = sumValues(10);
    printf("Sum = %d\nMean = %.2f", s, s/10.0);
    return 0;
}
