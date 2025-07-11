#include <stdio.h>
#include <string.h>

void Censor(char *str) {
    char *p=str;
    while ((p=strstr(p,"foo")) != NULL) {

        p[0]='x';
        p[1]='x';
        p[2]='x';
        p+=3;
    }
}

int main() {
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    Censor(text);

    printf("Censored: %s", text);

    return 0;
}
