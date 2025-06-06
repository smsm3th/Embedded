#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10,y=20,z=30;
    int *px=&x,*py=&y,*pz=&z;

    printf("Befor swapping:\n");
    printf(" x=%d \n y=%d \n z=%d\n",x,y,z);
    printf(" px=%p\n py=%p\n pz=%p\n",px,py,pz);
    printf(" *px=%d\n *py=%d\n *pz=%p\d",*px,*py,*pz);

    printf("swapping pointrs");

    pz=px;
    px=py;
    py=pz;

    printf("aftar swapping:\n");
    printf(" x=%d \n y=%d \n z=%d\n",x,y,z);
    printf(" px=%p\n py=%p\n pz=%p\n",px,py,pz);
    printf(" *px=%d\n *py=%d\n *pz=%d\n",*px,*py,*pz);
    return 0;
}
