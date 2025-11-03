#include <stdio.h>

// Function to calculate string length without using strlen
int string_length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to reverse a string in place
void reverse_note(char *note) {
    int len = string_length(note);
    int i = 0, j = len - 1;
    char temp;

    while (i < j) {
        // Swap characters at positions i and j
        temp = note[i];
        note[i] = note[j];
        note[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char note[100];

    printf("Enter your note: ");
    fgets(note, sizeof(note), stdin);

    // Remove newline character if present
    int len = string_length(note);
    if (len > 0 && note[len - 1] == '\n') {
        note[len - 1] = '\0';
    }

    reverse_note(note);

    printf("Reversed note: %s\n", note);

    return 0;
}
