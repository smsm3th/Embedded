#include <stdio.h>

int main() {
    float hoursworked;
    float hourlyrate = 50.0;
    float salary;

    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hoursworked);

    salary = hoursworked * hourlyrate;

    if (hoursworked < 40) {
        salary *= 0.9;
    }

    printf("The weekly salary is: %f\n", salary);

    return 0;
}
