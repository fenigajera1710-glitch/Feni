#include <stdio.h>
int main() {
    int a[10], b[10]={0}, i, n, dir;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("Enter positions to shift: ");
    scanf("%d",&n);
    printf("Enter direction (1=left, 2=right): ");
    scanf("%d",&dir);

    if(dir==1) { // Left shift
        for(i=0;i<10-n;i++)
            b[i]=a[i+n];
    } else { // Right shift
        for(i=n;i<10;i++)
            b[i]=a[i-n];
    }

    printf("Shifted array:\n");
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}
