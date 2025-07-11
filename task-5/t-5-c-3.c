#include <stdio.h>
#include <string.h>

void Capitalize(char *str) {
    while (*str!='\0') {
        if (*str>='a' && *str<='z') {
            *str-=32;
        }
        str++;
    }
}

int main() {
    char text[100];

    printf("Enter a string:");
    fgets(text, sizeof(text), stdin);

    Capitalize(text);

    printf("Capitalized:%s", text);

    return 0;
}

