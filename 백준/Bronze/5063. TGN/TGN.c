#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int r, e, c;
        scanf("%d %d %d", &r, &e, &c);
        if (r < e - c) printf("advertise\n");
        else if (r == e - c) printf("does not matter\n");
        else if (r > e - c) printf("do not advertise\n");
    }
}