#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int num = N / 4;
    for (int i = 0; i < num; i++) printf("long ");
    printf("int");
}