#include <stdio.h>

void Capitalize(char *str) {
    int i = 0;
    while (str[i]!='\0'){
        if (str[i]>='a' && str[i]<='z') {
            str[i]=str[i]-32;
        }
        i++;
    }
}

int main(){
    char text[100];

    printf("Enter a string:");
    fgets(text, sizeof(text), stdin);

    Capitalize(text);

    printf("Capitalized: %s", text);

    return 0;
}
