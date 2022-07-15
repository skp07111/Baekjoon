#include <stdio.h>

int main() {
    long A, B;
    scanf("%ld %ld", &A, &B);
    long answer = (A+B)*(A-B);
    printf("%ld", answer);
}