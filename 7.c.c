#include <stdio.h>

int main() {

    float number, sum = 0, average;
    int i;

    printf("Enter 10 numbers:\n");
    for (i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%f", &number);
        sum += number;
    }
    average = sum / 10;
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", average);

    return 0;
}
