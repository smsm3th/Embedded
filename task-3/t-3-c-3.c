#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the num of elements:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

     printf("uniq elements are:");
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<n;j++){
        if(arr[i]==arr[j])
        k++;
        }
        if(k == 1)
    printf("%d\t",arr[i]);
    }

    return 0;
}

