#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int a = 0 ,e = 0 ,i = 0 ,o = 0 , u = 0 ;
    printf("Enter a string:");
    gets(str);

    for(int j = 0; str[j] != '\0'; j++){
        switch(str[j]){
            case 'a':
            case 'A':  a++; break;
            case 'e':
            case 'E':  e++; break;
            case 'i':
            case 'I':  i++; break;
            case 'o':
            case 'O':  o++; break;
            case 'u':
            case 'U':  u++; break;
        }
    }
    printf("Frequency of vowels:\n");
    printf("a/A = %d\n",a);
    printf("e/E = %d\n",e);
    printf("i/I = %d\n",i);
    printf("o/O = %d\n",o);
    printf("u/U = %d\n",u);


    return 0;
}