#include <stdio.h>
int main() {
    int a[10], n, val, i, j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter value to delete: ");
    scanf("%d",&val);
    for(i=0;i<n;i++) {
        if(a[i]==val) {
            for(j=i;j<n-1;j++)
                a[j]=a[j+1];
            n--;
            i--; // adjust index
        }
    }
    printf("Array after deletion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
