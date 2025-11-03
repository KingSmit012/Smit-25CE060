#include <stdio.h>

int string_length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Manual string comparison function
int compare_notes(char *note1, char *note2) {
    int i = 0;
    while (note1[i] != '\0' && note2[i] != '\0') {
        if (note1[i] != note2[i]) {
            return note1[i] - note2[i];
        }
        i++;
    }
    // If one string ended, check which one is longer
    if (note1[i] == '\0' && note2[i] == '\0') {
        return 0; // Both strings ended simultaneously, equal
    }
    else if (note1[i] == '\0') {
        return -1; // note1 shorter than note2
    }
    else {
        return 1; // note1 longer than note2
    }
}

int main() {
    char note1[100], note2[100];

    printf("Enter first note: ");
    fgets(note1, sizeof(note1), stdin);
    printf("Enter second note: ");
    fgets(note2, sizeof(note2), stdin);

    // Remove trailing newline characters
    int len1 = 0, len2 = 0;
    while (note1[len1] != '\0') len1++;
    if (len1 > 0 && note1[len1 - 1] == '\n') note1[len1 - 1] = '\0';

    while (note2[len2] != '\0') len2++;
    if (len2 > 0 && note2[len2 - 1] == '\n') note2[len2 - 1] = '\0';

    int result = compare_notes(note1, note2);

    if (result == 0) {
        printf("Notes are identical.\n");
    }
    else if (result < 0) {
        printf("First note is smaller than second note.\n");
    }
    else {
        printf("First note is greater than second note.\n");
    }

    return 0;
}
