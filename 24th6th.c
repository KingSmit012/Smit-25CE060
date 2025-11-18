#include <stdio.h>

#define MAX 2048

int main(void) {
    char s[MAX];
    int i = 0;

    printf("Enter note to convert to UPPER CASE:\n");
    gets(s);


    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A');
        }
        i++;
    }

    printf("\nUpper-case:\n%s\n", s);
    return 0;
}
