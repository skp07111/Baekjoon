#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int A[T], B[T];
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A[i], &B[i]);
        printf("Case #%d: %d + %d = %d\n", i + 1, A[i], B[i], A[i] + B[i]);
    }
}