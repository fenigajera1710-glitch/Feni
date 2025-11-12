#include <stdio.h>
int sumValues(int n) {
    int x;
    if(n == 0) return 0;
    scanf("%d", &x);
    return x + sumValues(n - 1);
}
int main() {
    int n; scanf("%d", &n);
    int s = sumValues(n);
    printf("Sum = %d\nMean = %.2f", s, s/(float)n);
    return 0;
}
