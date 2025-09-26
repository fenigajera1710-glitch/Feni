#include<stdio.h>
#include<string.h>

int main()
{

    char str1[20] , str2[25];

    printf("Enter first string:");
    gets(str1);

    printf("Enter second string:");
    gets(str2);

    int result = strcmp(str1,str2);

    if(result == 0)
    {
        printf("Both are same");
    }
    else if(result < 0)
    {

        printf("string 1 is smaller than string 2");
    }
    else
    {

        printf("string1 is grater than string2");

    }

    return 0;


}


