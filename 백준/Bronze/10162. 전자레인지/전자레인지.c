#include <stdio.h>

int main() {
    int T, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    scanf("%d", &T);
    while(T >= 300) {
        T = T - 300;
        cnt1++;
    }
    while(T >= 60) {
        T = T - 60;
        cnt2++;
    }
    while(T >= 10) {
        T = T - 10;
        cnt3++;
    }
    if (T == 0) {
        printf("%d %d %d", cnt1, cnt2, cnt3);
    }
    else {
        printf("-1");
    }
}