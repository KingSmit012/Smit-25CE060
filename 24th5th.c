#include <stdio.h>

#define MAX 2048

int main(void) {
    char a[MAX];
    char b[MAX];
    int i = 0, j = 0;

    printf("Enter first note:\n");
    gets(a);

    printf("Enter second note:\n");
    gets(b);


    while (a[i] != '\0') i++;

    if (i > 0 && a[i-1] != ' ') {
        a[i] = ' ';
        i++;
        a[i] = '\0';
    }

    while (b[j] != '\0' && i < MAX - 1) {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';

    printf("\nConcatenated:\n%s\n", a);

    return 0;
}
