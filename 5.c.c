#include <stdio.h>

int main() {
    float num1, num2, num3, max;

    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    printf("The maximum number is: %d", max);

    return 0;
}
