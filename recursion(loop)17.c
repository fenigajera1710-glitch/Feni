#include <stdio.h>
void countNums(int n, int *p, int *ne, int *z) {
    int x;
    if(n == 0) return;
    scanf("%d", &x);
    if(x > 0) (*p)++;
    else if(x < 0) (*ne)++;
    else (*z)++;
    countNums(n - 1, p, ne, z);
}
int main() {
    int p=0, ne=0, z=0;
    countNums(200, &p, &ne, &z);
    printf("+ve=%d -ve=%d zeros=%d", p, ne, z);
    return 0;
}
