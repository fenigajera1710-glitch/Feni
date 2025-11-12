#include <stdio.h>
void findMinMax(int n, int *min, int *max) {
    int x;
    if(n == 0) return;
    scanf("%d", &x);
    if(x < *min) *min = x;
    if(x > *max) *max = x;
    findMinMax(n - 1, min, max);
}
int main() {
    int min = 999999, max = -999999;
    findMinMax(100, &min, &max);
    printf("Min=%d Max=%d", min, max);
    return 0;
}
