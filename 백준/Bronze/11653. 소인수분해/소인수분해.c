#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int i = 2;
    while(i <= N) {
        if (N % i == 0) {
            printf("%d\n", i);
            N = N / i;
        }
        else i++;
    }
}