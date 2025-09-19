#include <stdio.h>

int main() {
    int numbers[25];
    int positives = 0, negatives = 0;
    int evens = 0, odds = 0;

    printf("Enter 25 integers:\n");
    for (int i = 0; i < 25; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Count positive/negative
        if (numbers[i] > 0) {
            positives++;
        } else if (numbers[i] < 0) {
            negatives++;
        }

        // Count even/odd
        if (numbers[i] % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }

    printf("Total Positive Numbers: %d\n", positives);
    printf("Total Negative Numbers: %d\n", negatives);
    printf("Total Even Numbers: %d\n", evens);
    printf("Total Odd Numbers: %d\n", odds);

    return 0;
}
