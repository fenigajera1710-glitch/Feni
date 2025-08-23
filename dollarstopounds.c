#include<stdio.h>

int main()
{
    int dollars,pounds;

    printf("Enter amount into dollars:");
    scanf("%d",&dollars);

    pounds = dollars *48/70;

    printf("%d dollars = %d pounds",dollars,pounds);

    return 0;

}