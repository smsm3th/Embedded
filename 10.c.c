
#include <stdio.h>

int main() {
    int ID, password;
    int correctID = 1234;
    int correctPassword = 4321;
    int attempts = 0;

    printf("Enter your ID: ");
    scanf("%d", &ID);

    if (ID == correctID) {
        while (attempts < 3) {
            printf("Enter your password: ");
            scanf("%d", &password);

            if (password == correctPassword) {
                printf("Welcome!\n");
                return 0;
            }
            else {
                printf("You are not registered\n");
                attempts++;
            }
        }
        printf("No more tries\n");
    }
    else {
        printf("You are not registered\n");
    }

    return 0;
