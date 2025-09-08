#include<stdio.h>

int main()
{

    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int sum_even = n * (n+1);
    printf("sum of first %d even number is : %d\n", n, sum_even);

    return 0;
}