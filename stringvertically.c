#include<stdio.h>
#include<string.h>

int main(){
char str[100];

printf("Enter a string:");
gets(str);

printf("character vertically:\n");
for(int i = 0; i < strlen(str); i++){
    printf("%c\n",str[i]);
}

return 0;
}
