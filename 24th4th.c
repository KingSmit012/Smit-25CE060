#include <stdio.h>

#define MAX 1024

int main(void) {
    char src[MAX];
    char dest[MAX];
    int i = 0;

    printf("Enter original note:");
    gets(src);

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    printf("\nOriginal: %s\n", src);
    printf("Copy    : %s\n", dest);

    return 0;
}
