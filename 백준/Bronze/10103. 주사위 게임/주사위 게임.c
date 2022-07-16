#include <stdio.h>

int main() {
    int n, a = 100, b = 100;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int c, d;
        scanf("%d %d", &c, &d);
        if (c > d) b = b - c;
        else if (c < d) a = a - d;
    }
    printf("%d\n", a);
    printf("%d\n", b);
}