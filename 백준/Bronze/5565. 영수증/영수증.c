#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);
    for (int i = 0; i < 9; i++) {
        int price;
        scanf("%d", &price);
        amount = amount - price;
    }
    printf("%d", amount);
}