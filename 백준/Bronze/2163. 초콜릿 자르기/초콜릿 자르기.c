#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &M, &N);
    printf("%d", (N-1) + N * (M-1));
}