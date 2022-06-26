#include <stdio.h>

int main() {
    int N, answer = 1;
    scanf("%d", &N);
    if (N == 0) printf("1");
    else {
        while (N != 0) {
            answer = answer * N;
            N--;
        }
        printf("%d", answer);
    }
}