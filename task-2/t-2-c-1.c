#include <stdio.h>
int Get_Max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y, max;

    printf("Enter the first number:");
    scanf("%d", &x);

    printf("Enter the second number:");
    scanf("%d", &y);

    max = Get_Max(x, y);

    printf("The maximum value is:%d", max);

    return 0;
}
