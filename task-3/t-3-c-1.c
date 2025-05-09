#include <stdio.h>

void sort(int arr[],int n,int desc) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        if ((desc && arr[i] < arr[j]) || (!desc && arr[i] > arr[j])) {
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
}

int main() {
    int n, order;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:", n);
    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    printf("Enter 0 for ascending or 1 for descending: ");
    scanf("%d", &order);
    sort(arr, n, order);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}
