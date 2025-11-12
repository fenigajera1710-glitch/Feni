#include <stdio.h>
int main() {
    int n, sq, temp, count = 0, pow = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    sq = n * n;
    temp = n;
    while(temp > 0) {
        count++;
        temp /= 10;
        pow *= 10;
    }
    if(sq % pow == n)
        printf("%d is an Automorphic Number.", n);
    else
        printf("%d is not an Automorphic Number.", n);
    return 0;
}
