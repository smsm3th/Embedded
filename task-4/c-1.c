#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    printf("x=%d\n",x);
    int *ptr=&x;
    *ptr=20;
    printf("x=%d",x);

}

