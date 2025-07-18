#include <stdio.h>

#define ENGLISH

int main() {
#ifdef ENGLISH
    printf("Insert Disk 1\n");
#elif defined(FRENCH)
    printf("Inserez Le Disque 1");
#elif defined(SPANISH)
    printf("Inserte El Disco 1");
#else
    printf("Language not defined");
#endif

    return 0;
}
