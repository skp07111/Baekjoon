#include <stdio.h>

int main() {
    int sum, num, cnt = 0;
    scanf("%d %d", &sum, &num);
    for(int i = 0; i < num; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        cnt = cnt + a*b;
    }
    if (sum == cnt) printf("Yes");
    else printf("No");
}