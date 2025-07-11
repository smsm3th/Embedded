#include <stdio.h>
#include <string.h>

void remove_filename(char *url){
    char *last_slash=strrchr(url,'/');
    if(last_slash != NULL) {
        *last_slash ='\0';
    }
}

int main() {
    char url[200];

    printf("Enter url:");
    scanf("%s",url);
    remove_filename(url);
    printf("url without file name: %s\n", url);

    return 0;
}
