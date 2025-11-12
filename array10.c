#include <stdio.h>
int main() {
    int a[10], freq[10], i, j, count;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++) {
        count=1;
        if(a[i]!=-1) {
            for(j=i+1;j<10;j++) {
                if(a[i]==a[j]) {
                    count++;
                    a[j]=-1;
                }
            }
            freq[i]=count;
        }
    }

    printf("Frequency of each number:\n");
    for(i=0;i<10;i++)
        if(a[i]!=-1)
            printf("%d occurs %d times\n",a[i],freq[i]);
    return 0;
}
