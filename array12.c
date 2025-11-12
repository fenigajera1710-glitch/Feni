#include <stdio.h>
int main() {
    int a[10], n, i, newnum;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number to insert at beginning: ");
    scanf("%d",&newnum);
    for(i=n;i>0;i--)
        a[i]=a[i-1];
    a[0]=newnum;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
