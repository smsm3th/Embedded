#include <stdio.h>

#define CHECK(x, y, n) ((x)>=0 && (x)<=(n)-1 && (y)>=0 && (y)<=(n)-1)
#define MEDIAN(x, y, z) (((x)>(y)) ? ((x)<(z) ? (x) : ((y)>(z) ? (y) : (z))) : ((y)<(z) ? (y) : ((x)>(z) ? (x) : (z))))
#define POLUNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x)+2*(x)*(x)*(x)*(x)-5*(x)*(x)*(x)-(x)*(x)+7*(x)-6)

int main() {
    int x=5, y=7, z=8, n=10;

    printf("CHECK= %d\n", CHECK(x, y, n));
    printf("MEDIAN= %d\n", MEDIAN(x, y, z));
    printf("POLUNOMIAL= %d\n", POLUNOMIAL(x));

    return 0;
}
