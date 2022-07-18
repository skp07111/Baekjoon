#include <stdio.h>

int main() {
    long a, b, ans;
    scanf("%ld %ld", &a, &b);
    ans = a - b;
    if (ans < 0) {
        ans = ans * (-1);
    }
    printf("%ld", ans);
}