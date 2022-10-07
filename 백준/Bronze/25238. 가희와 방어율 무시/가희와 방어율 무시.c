#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    if (a - a * (b / 100) >= 100) printf("0");
    else printf("1");
}