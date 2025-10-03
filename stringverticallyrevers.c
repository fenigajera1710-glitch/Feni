#include<stdio.h>
#include<string.h>

int main(){

char str[100];
int len,i;

printf("Enter a string:");
gets(str);
len = strlen(str);
printf("character vertically in revers:\n");

for( i = len - 1; i >= 0; i--){

printf("%c\n",str[i]);}

return 0;

}
