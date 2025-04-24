#include <stdio.h>

    int main() {
    int number, i = 1;
    int factorial = 1;

    printf("Enter the number:");
    scanf("%d", &number);

    while (i <= number) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is %d\n", number, factorial);

    return 0;
}
