#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int min = 1000000, max = 1;
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        if (min > num) min = num;
        if (max < num) max = num;
    }
    printf("%d", min * max);
}