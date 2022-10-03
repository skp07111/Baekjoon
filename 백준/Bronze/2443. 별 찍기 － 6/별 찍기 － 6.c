#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    for (int i = num; i > 0; i--) {
        for (int j = i; j < num; j++) printf(" ");
        for (int k = 2 * i - 1; k >= 1; k--) {
            printf("*");
        }
        printf("\n");
    }
}