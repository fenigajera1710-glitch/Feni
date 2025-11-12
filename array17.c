#include <stdio.h>
int main() {
    int a[10], n, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    n--;
    printf("Array after deleting last element:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
