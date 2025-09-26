#include<stdio.h>
#include<string.h>

int main()
{
char str[10];

printf("Enter string:");
gets(str);

printf("reverse of enter string:%s",strrev(str));

return 0;
}
