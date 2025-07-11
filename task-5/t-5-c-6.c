#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url) {
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

int main() {
    char domain[100];
    char url[200];

    printf("Enter domain:");
    scanf("%s",domain);

    build_index_url(domain,url);

    printf("full url:%s\n", url);

    return 0;
}
