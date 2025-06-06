#include <stdio.h>
#include <stdlib.h>
int mul(int a1[],int a2[],int i){
    return a1[i] * a2[i];
}
int main()
{
    int a1[]={1,2,3,4,5},a2[]={1,2,3,4,5},res[5],i;

    for(i=0;i<5;i++)
        res[i]=mul(a1,a2,i);

    for(i=0;i<5;i++)
        printf("a[%d]*a[%d]=%d\n",i,i,res[i]);


    return 0;
}
