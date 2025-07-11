#include <stdio.h>

int main() {
    int month,day,year;

    const char *months[] = {
        "January","February","March","April","May","June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&month,&day,&year);

    if (month >= 1 && month <= 12) {
        printf("You entered the date %s %d, %d\n",months[month - 1],day,year);
    } else {
        printf("Invalid month!\n");
    }

    return 0;
}
