#include <stdio.h>

int main() {
    int N, one, two;
    scanf("%d", &N);
    one = N - (N * 0.22);
    two = N - (0.2 * N * 0.22);
    printf("%d %d", one, two);
}