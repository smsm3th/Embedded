#include <stdio.h>
int main(){
int num,n=0;
printf("Enter the number:");
scanf("%d",&num);
if(num==0)
n=1;
else{
    while(num>0 || num<0){
    num=num/10;
    n++;
    }
}
printf("Number of digits:%d",n);
}
