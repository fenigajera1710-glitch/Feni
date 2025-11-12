#include <stdio.h>
int armstrongSum(int n) {
    if (n == 0) return 0;
    int d = n % 10;
    return d*d*d + armstrongSum(n / 10);
}
int main() {
    int n;
    scanf("%d", &n);
    if (n == armstrongSum(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
