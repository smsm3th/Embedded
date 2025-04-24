#include <stdio.h>

int main() {
    int id;
    printf("Enter your id number");
    scanf("%d", &id);
    if (id == 1234) {
    printf("Name : Harry");
    }
    else if (id == 5678) {
    printf("Name : Ron");
    }
    else if (id == 1145) {
    printf("Name : Hermione");
    }
    else {
        printf("Wrong id");
    }

    return 0;
}
