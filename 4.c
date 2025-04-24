#include <stdio.h>

int main() {
    int grade;
    printf("Enter your grade (0 - 100): ");
    scanf("%d", &grade);

    if (grade >= 85) {
        printf("Rating: Excellent");
    } else if (grade >= 75) {
        printf("Rating: Very Good");
    } else if (grade >= 65) {
        printf("Rating: Good");
    } else if (grade >= 60) {
        printf("Rating: Pass");
    } else
        printf("Rating: Fail\n");

    return 0;
}
