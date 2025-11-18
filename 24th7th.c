#include <stdio.h>

#define MAX 2048

int main(void) {
    char s[MAX];
    int i = 0;

    printf("Enter note to convert to lower case:\n");
    gets(s);

    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
        i++;
    }

    printf("\nLower-case:\n%s\n", s);
    return 0;
}
