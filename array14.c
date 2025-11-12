#include <stdio.h>
int main() {
    int a[10], n, newnum, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number to insert at end: ");
    scanf("%d",&newnum);
    a[n]=newnum;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
