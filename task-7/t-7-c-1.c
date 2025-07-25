#include <stdio.h>

struct Employee{
    float salary;
    float bonus;
    float deductions;
};

int main() {
    struct Employee employees[3];
    char names[3][10] = {"Mohsen", "Maged", "Mariam"};

    float totalSalary=0, totalBonus=0, totalDeductions=0;

    for(int i = 0; i<3; i++) {
        printf("Enter salary for %s:", names[i]);
        scanf("%f", &employees[i].salary);

        printf("Enter bonus for %s: ", names[i]);
        scanf("%f", &employees[i].bonus);

        printf("Enter deductions for %s: ", names[i]);
        scanf("%f", &employees[i].deductions);

        totalSalary += employees[i].salary;
        totalBonus += employees[i].bonus;
        totalDeductions += employees[i].deductions;
    }

    printf("\nTotal salary paid: %.2f\n", totalSalary);
    printf("Total bonus paid: %.2f\n", totalBonus);
    printf("Total deductions: %.2f\n", totalDeductions);

    return 0;
}
