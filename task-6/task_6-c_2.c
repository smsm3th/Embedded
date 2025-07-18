#include <stdio.h>
#define ArraySize(arr) (sizeof(arr) / sizeof((arr)[0]))

int main() {
    int arr[] = {1, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = ArraySize(arr);
    printf("Number of elements= %d\n", size);
    return 0;
}
