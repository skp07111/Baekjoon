#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int N[100] = {0};
    for (int i =0; i < n; i++) {
        scanf("%d", &N[i]);   
    }
    int v, cnt = 0;
    scanf("%d", &v);
    for (int i =0; i < n; i++) {
        if (N[i] == v) cnt++;
    }
    printf("%d", cnt);
}