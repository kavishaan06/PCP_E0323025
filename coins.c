#include <stdio.h>

void greedy(int coins[], int amt) {
    for (int i = 0; i < 5; i++) {
        while (amt >= coins[i]) {
            printf ("%d \t",coins[i]);
            amt -= coins[i];
        }
    }
}

int main() {
    int coins[] = {25, 10, 5, 2, 1};
    int amt;
    printf("Enter amount required: ");
    scanf("%d", &amt);
    greedy(coins, amt);
    return 0;
}


