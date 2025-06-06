#include <stdio.h>
#include <stdlib.h>
int sum(int *a,int *b){
   return *a+*b;
}
int main()
{
    int x,y,res;
    printf("Enter the first value:");
    scanf("%d",&x);
    printf("Enter the second value:");
    scanf("%d",&y);

    res=sum(&x,&y);
    printf("the sum=%d",res);
}

