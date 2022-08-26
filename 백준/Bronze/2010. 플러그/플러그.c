#include <stdio.h>

int main() {
    int N, cnt = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int mul;
        scanf("%d", &mul);
        if (i == 0) cnt = mul;
        else cnt = cnt + mul - 1;
    }
    printf("%d", cnt);
}