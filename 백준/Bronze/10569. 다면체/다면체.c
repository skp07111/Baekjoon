#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int v, e;
        scanf("%d %d", &v, &e);
        printf("%d\n", 2-v+e);
    }
}