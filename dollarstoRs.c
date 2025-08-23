#include<stdio.h>

int main()
{
    int Rs,dollars;

    printf("Enter amount in dollars:");
    scanf("%d",&dollars);

    Rs = dollars/48;

    printf("%d dollars = %d Rs.\n",dollars,Rs);

    return 0;
}