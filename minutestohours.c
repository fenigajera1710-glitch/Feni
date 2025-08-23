#include<stdio.h>

int main()
{
    int hours,minutes;

    printf("enter time in minutes:");
    scanf("%d",&minutes);

    hours = minutes/60;

    printf("%d minutes = %d hours\n",minutes,hours);

    return 0;
}