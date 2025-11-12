#include <stdio.h>
int main() {
    int a[10], n, pos, newnum, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter position and number to insert: ");
    scanf("%d %d",&pos,&newnum);
    for(i=n;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=newnum;
    n++;
    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
