#include <stdio.h>
#include <stdlib.h>

int maxProfit(const int prices[], int n) {
    if (n <= 1) return 0;
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; ++i) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) maxProfit = profit;
        }
    }
    return maxProfit;
}

int main(void) {
    int n;
    printf("Enter number of days: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid number of days.\n");
        return 1;
    }

    int *prices = malloc(n * sizeof(int));
    if (!prices) {
        perror("malloc");
        return 1;
    }

    printf("Enter %d prices (separated by spaces or newlines):\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &prices[i]) != 1) {
            fprintf(stderr, "Invalid input for price %d.\n", i + 1);
            free(prices);
            return 1;
        }
    }

    int profit = maxProfit(prices, n);
    printf("Maximum Profit: %d\n", profit);

    free(prices);
    return 0;
}
