#include <stdio.h>

#define MAX 4096

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}

int main(void) {
    char s[MAX];
    int i = 0;
    int start = 1;

    printf("Enter note to Capitalize Each Word:\n");
    gets(s);

    while (s[i] != '\0') {
        char c = s[i];

        if (is_space(c)) {
            start = 1;
        } else {
            if (start) {
                if (c >= 'a' && c <= 'z')
                    s[i] = c - ('a' - 'A');
                start = 0;
            } else {
                if (c >= 'A' && c <= 'Z')
                    s[i] = c + ('a' - 'A');
            }
        }
        i++;
    }

    printf("\nCapitalized:\n%s\n", s);
    return 0;
}
