#include<stdio.h>

int main()
{
    int hours,minutes;

    printf("Emter time in hours:");
    scanf("%d",&hours);

    minutes = hours * 60;

    printf("%d hours = %d minutes\n",hours,minutes);

        return 0;
}