#include <stdio.h>
int main() {
    int a[10], n, val, i, found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter value to search: ");
    scanf("%d",&val);
    for(i=0;i<n;i++) {
        if(a[i]==val) {
            printf("Value found at position %d\n",i+1);
            found=1;
            break;
        }
    }
    if(!found)
        printf("Value not found.\n");
    return 0;
}
