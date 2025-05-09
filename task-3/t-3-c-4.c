#include <stdio.h>
int n, r;
int c(int arr[]) {
    for (int i = 0; i < n; i++) {
        r = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\t", arr[i]);
                break;
            }
        }
    }
}

int main() {
    printf("Enter the num of elements:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("The repeating elements: ");
    c(arr);

    return 0;
}
