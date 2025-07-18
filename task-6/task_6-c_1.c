#include <stdio.h>

#define cube(x) ((x) * (x) * (x))
#define remainder4(n) ((n) % 4)
#define LessThan100(x, y) (((x) * (y)) < 100 ? 1 : 0)

int main() {
    int x=3;
    int n=10;
    int y=20;

    printf("cube(%d) = %d\n", x, cube(x));
    printf("remainder4(%d) = %d\n", n, remainder4(n));
    printf("LessThan100(%d, %d) = %d\n", x, y, LessThan100(x, y));

    return 0;
}
