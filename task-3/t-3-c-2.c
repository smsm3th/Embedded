#include <stdio.h>


int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the value of elements:");
    for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    int first=arr[0],second=arr[0];
    for (i=0 ; i<n ; i++) {
        if (arr[i]>first) {
            second = first;
            first = arr[i];
        }
    }
        printf("Second largest element is:%d", second);

    return 0;
}

