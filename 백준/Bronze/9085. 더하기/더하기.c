#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, sum = 0;
        scanf("%d", &N);
        for (int j = 0; j < N; j++) {
            int num;
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }
}