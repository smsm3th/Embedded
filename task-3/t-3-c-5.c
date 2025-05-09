#include <stdio.h>

int main() {
    int row=5, col=5;
    int arr[5][5];
    int rsum[5]={0}, csum[5]={0};
    int i, j;

    printf("Enter the values of 5*5 matrix:\n");
    for (i=0 ; i<row ; i++) {
        for (j=0 ; j<col ; j++)
            scanf("%d", &arr[i][j]);
        }

    for (i=0 ; i<row ; i++) {
        for (j=0 ; j<col ; j++)
            rsum[i] += arr[i][j];
        }

    for (j=0 ; j<col ; j++) {
        for (i=0 ; i<row ; i++)
            csum[j] += arr[i][j];
        }
    printf("\nrow sums:\n");
    for (i=0 ; i<row ; i++)
        printf("Row%d: %d\n", i + 1, rsum[i]);

    printf("\n col sums:\n");
    for (j=0 ; j<col ; j++)
        printf("col %d: %d\n", j + 1, csum[j]);

    return 0;
}

