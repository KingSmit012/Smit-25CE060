#include <stdio.h>
#define MAXN 1000000 

int main(void) {
    int N;
    int i;
    int x;
    
    printf("Enter N (total participants): ");
    if (scanf("%d", &N) != 1) {
        printf("Invalid input for N.\n");
        return 1;
    }
    if (N <= 0 || N > MAXN) {
        printf("N must be between 1 and %d.\n", MAXN);
        return 1;
    }

    static unsigned char seen[MAXN + 1];
    for (i = 1; i <= N; ++i) seen[i] = 0;

    printf("Enter %d participant IDs (one per value), the attendance list:\n", N - 1);

    int count_read = 0;
    int duplicates = 0;
    int out_of_range = 0;

    for (i = 0; i < N - 1; ++i) {
        if (scanf("%d", &x) != 1) {
            printf("Failed to read ID #%d. Stopping.\n", i + 1);
            break;
        }
        ++count_read;
        if (x < 1 || x > N) {
            out_of_range = 1;
        } else {
            if (seen[x]) {
                duplicates = 1;
            } else {
                seen[x] = 1;
            }
        }
    }

    if (count_read != N - 1) {
        printf("Warning: expected %d IDs but read %d.\n", N - 1, count_read);
    }

    int missing_count = 0;
    int last_missing = -1;
    for (i = 1; i <= N; ++i) {
        if (!seen[i]) {
            ++missing_count;
            last_missing = i;
            if (missing_count <= 10) {
                
            }
        }
    }

    
    if (out_of_range) {
        printf("Note: one or more input IDs were outside the valid range 1..%d.\n", N);
    }
    if (duplicates) {
        printf("Note: duplicate IDs were detected in the input.\n");
    }

    if (missing_count == 1 && !out_of_range && !duplicates && count_read == N - 1) {
        printf("Missing participant ID is: %d\n", last_missing);
    } else {
        if (missing_count == 0) {
            printf("No IDs missing. (All IDs 1..%d were present.)\n", N);
        } else {
            printf("There are %d missing ID(s).", missing_count);
            if (missing_count <= 10) {
                printf(" Missing IDs:");
                for (i = 1; i <= N; ++i) {
                    if (!seen[i]) printf(" %d", i);
                }
                printf("\n");
            } else {
                printf(" (too many to list)\n");
            }
        }
    }

    return 0;
}
