#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Student {
    int id;
    float programming, dataStructures, discreteMath, algorithms;
};

int main() {
    struct Student students[10];
    int i, choice, targetID, found;

    srand(time(0));

    for(i = 0; i < 10; i++) {
        students[i].id = i ++;
        students[i].programming = rand() % 101;
        students[i].dataStructures = rand() % 101;
        students[i].discreteMath = rand() % 101;
        students[i].algorithms = rand() % 101;
    }

    while(1) {
        printf("1. View student grades\n");
        printf("2. Edit student grades (admin)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice==1) {
            printf("Enter student ID: ");
            scanf("%d", &targetID);
            found = 0;
            for(i = 0; i < 10; i++) {
                if(students[i].id == targetID) {
                    printf("Programming: %.2f\n", students[i].programming);
                    printf("Data Structures: %.2f\n", students[i].dataStructures);
                    printf("Discrete Math: %.2f\n", students[i].discreteMath);
                    printf("Algorithms: %.2f\n", students[i].algorithms);
                    found = 1;
                    break;
                }
            }
            if(!found) {
                printf("Invalid ID\n");
            }
        }

        else if(choice == 2) {
            printf("Enter student ID to edit: ");
            scanf("%d", &targetID);
            found = 0;
            for(i = 0; i < 10; i++) {
                if(students[i].id == targetID) {
                    printf("Enter new Programming grade: ");
                    scanf("%f", &students[i].programming);
                    printf("Enter new Data Structures grade: ");
                    scanf("%f", &students[i].dataStructures);
                    printf("Enter new Discrete Math grade: ");
                    scanf("%f", &students[i].discreteMath);
                    printf("Enter new Algorithms grade: ");
                    scanf("%f", &students[i].algorithms);
                    printf("Grades updated successfully.\n");
                    found = 1;
                    break;
                }
            }
            if(!found) {
                printf("Invalid ID\n");
            }
        }

        else if(choice == 3) {
            break;
        }

        else {
            printf("Invalid choice");
        }
    }

    return 0;
}
