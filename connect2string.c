#include<stdio.h>
#include<string.h>

int main(){
char str1[100], str2[200];

printf("Enter first string:\n");
gets(str1);

printf("Enter second string:\n");
gets(str2);

strcat(str1,str2);
printf("After concatenation:%s\n",str1);

return 0;
}
