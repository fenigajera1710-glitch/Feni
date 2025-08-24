#include<stdio.h>
int main()
{
    float gross,net;

    printf("Enter Gross Sales:");
    scanf("%f",&gross);
    

    net = gross - (0.10 * gross);

    printf("Net Sales = %.2f\n",net);

    return 0;
}