#include <stdio.h>

int main() {
    int minkook[4], manse[4], sum1 = 0, sum2 = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &minkook[i]);
        sum1 += minkook[i];
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", &manse[i]);
        sum2 += manse[i];
    }
    if (sum1 > sum2) printf("%d", sum1);
    else printf("%d", sum2);
}