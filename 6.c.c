#include <stdio.h>

int main() {
    int answer;

    do {
        printf("What is 3 x 4? ");
        scanf("%d", &answer);

        if (answer != 12) {
            printf("Try again.\n");
        }

    } while(answer != 12);

    printf("Thanks!\n");

    return 0;
}
