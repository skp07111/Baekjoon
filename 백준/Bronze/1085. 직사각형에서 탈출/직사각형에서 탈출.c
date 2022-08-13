#include <stdio.h>

int main() {
    int x, y, w, h, num1, num2;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if ((w - x) > x) num1 = x;
    else num1 = w - x;
    if ((h - y) > y) num2 = y;
    else num2 = h - y;
    if (num1 < num2) printf("%d", num1);
    else printf("%d", num2);
}