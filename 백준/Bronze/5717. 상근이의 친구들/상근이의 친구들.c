#include <stdio.h>

int main() {
    while(1) {
        int M, F;
        scanf("%d %d", &M, &F);
        if (M == 0 && F == 0) break;
        else printf("%d\n", M+F);
    }
}