#include <stdio.h>

int main() {
    int a1, b1, a2, b2;
    scanf("%d %d", &a1, &b1);
    a2 = a1 / 100 + a1 % 100 - a1 % 10 + a1 % 10 * 100;
    b2 = b1 / 100 + b1 % 100 - b1 % 10 + b1 % 10 * 100;
    if (a2 > b2) printf("%d", a2);
    else printf("%d", b2);
}