#include<stdio.h>

int main()
{
    char name[100];
    int n;
    printf("Enter your name :");
    scanf("%s", name);
    printf("How many times to print your name?");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%s\n", name);
    }

    return 0;
}
