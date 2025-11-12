#include <stdio.h>

int main() {
    int a[3][3], *p;
    int i, j, max, min;

    printf("Enter 9 elements of 3x3 matrix:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);

    p = &a[0][0];
    max = min = *p;

    for(i=0; i<9; i++) {
        if(*(p+i) > max) max = *(p+i);
        if(*(p+i) < min) min = *(p+i);
    }

    printf("\nLargest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}
