#include <stdio.h>

int main() {
    int n;
    int first = 1, second = 1, next;

    printf("Enter the number of months: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of months must be positive.\n");
        return 0;
    }

    printf("===============================\n");
    printf("\nSavings growth over %d months:\n", n);

    // Handle the first two months
    if (n >= 1){
        printf("===============\n");
        printf("Month 1: %d\n", first);
    }
    if (n >= 2){
        printf("Month 2: %d\n", second);
    }

    // Generate and display the savings for remaining months
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("Month %d: %d\n", i, next);
        first = second;
        second = next;
    }
    printf("===============\n");

    return 0;
}
