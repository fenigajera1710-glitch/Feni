#include<stdio.h>

int main()

{

    int a,i,sum = 0;

    printf("enter number a:");
    scanf("%d",&a);

    while(a != 0)
    {

        i = a % 10;
        a = a / 10;
        sum += i;
    }

    printf("sum of individual digits: %d\n", sum);

    return 0;
}
