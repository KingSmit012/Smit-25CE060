#include <stdio.h>

int main() {
    char note[1000];
    int i = 0;
    char ch;

    printf("Enter your note (end with ENTER): ");

    // Read input character by character until newline
    while ((ch = getchar()) != '\n') {
        note[i] = ch;   // Store each character in the array
        i++;
    }

    note[i] = '\0';  // Null-terminate the string manually

    // Manually calculate length
    int length = 0;
    while (note[length] != '\0') {
        length++;
    }

    printf("Length of the note: %d characters\n", length -1 );

    return 0;
}

