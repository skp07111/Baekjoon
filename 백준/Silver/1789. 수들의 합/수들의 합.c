#include <stdio.h>

int main() {
    long S, N = 1, sum = 0;
    scanf("%ld", &S);
    do {
        N++;
        sum = sum + N;
    } while(sum < S);
    printf("%ld", N-1);
}