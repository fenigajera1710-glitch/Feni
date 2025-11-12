#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *word;
    char last[20];
    char result[100] = "";

    printf("Enter full name: ");
    gets(name);

    word = strtok(name, " ");
    while(word != NULL) {
        strcpy(last, word);
        word = strtok(NULL, " ");
        if(word != NULL)
            sprintf(result + strlen(result), "%c.", last[0]);
    }

    printf("Abbreviated Name: %s %s\n", result, last);
    return 0;
}
