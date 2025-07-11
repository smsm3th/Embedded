#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension) {
    const char *dot=file_name+strlen(file_name);

    while (dot!=file_name && *dot != '.')
        dot--;

    if (dot!=file_name && *dot=='.') {
        strcpy(extension, dot++);
    } else {
        extension[0]='\0';
    }
}

int main() {
    char file[100],ext[20];

    printf("Enter file name: ");
    scanf("%s", file);

    get_extension(file, ext);

    if (strlen(ext) == 0)
        printf("No extension found.\n");
    else
        printf("Extension: %s\n", ext);

    return 0;
}

