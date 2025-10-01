#include<stdio.h>
#include<string.h>

int main()
{

    char str[100];
    int i, len;

    printf("Enter a string:");
    gets(str);

    len = strlen(str);

    for(int i=0;i<len/2;i++)
    {
        if(str[i] != str[len - i - 1])
        {
            printf("not a palindrome\n");
             return 0;
        }
    }
    printf("it is a palindrome\n");
    return 0;

}