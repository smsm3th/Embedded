#include <stdio.h>
int x;
int fibonacci(int x){
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else
    return fibonacci(x-1)+fibonacci(x-2);
}
int main(){
    printf("Enter the number:");
    scanf("%d",&x);
    printf("fibonacci of %d is %d",x,fibonacci(x));
}
