#include <stdio.h>

int main() {
    int num, cnt1 = 0, cnt2 = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b) cnt1++;
        else if (b > a) cnt2++;
    }
    printf("%d %d", cnt1, cnt2);
}