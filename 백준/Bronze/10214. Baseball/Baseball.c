#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        int Y, K, Y_cnt = 0, K_cnt = 0;
        for (int j = 0; j < 9; j++) {
            scanf("%d %d", &Y, &K);
            Y_cnt += Y;
            K_cnt += K;
        }
        if (Y_cnt > K_cnt) printf("Yonsei\n");
        else if (K_cnt > Y_cnt) printf("Korea\n");
        else printf("Draw\n");
    }
}