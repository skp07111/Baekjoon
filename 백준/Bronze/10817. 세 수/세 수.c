#include <stdio.h>

int main() {
    int a, b, c, first = 0, second = 0, third = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b) {
        if (a >= c) {
            first = a;
            if (b >= c) {
                second = b;
                third = c;
            } else if (b < c) {
                second = c;
                third = b;
            }
        } else if (a < c) {
            first = c;
            second = a;
            third = b;
        }
    }
    else {
        if (b >= c) {
            first = b;
            if (a >= c) {
                second = a;
                third = c;
            } else if (a < c) {
                second = c;
                third = a;
            }
        } else if (b < c) {
            first = c;
            second = b;
            third = a;
        }
    }
    printf("%d", second);
}