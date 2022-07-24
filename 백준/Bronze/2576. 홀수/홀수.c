#include <stdio.h>

int main() {
    int min = 100, sum = 0;
    for (int i = 0; i < 7; i++) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 1) {
            sum = sum + num;
            if (num < min)
                min = num;
        }
    }
    if (sum == 0 && min == 100)
        printf("-1");
    else {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
}