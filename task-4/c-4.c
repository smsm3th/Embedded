#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[]) {
    int i, j, temp;
    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {6, 3, 2, 5, 4}, i;
    bubblesort(arr);
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

