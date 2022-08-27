#include <stdio.h>

int main() {
    while(1) {
        int one, two;
        scanf("%d %d", &one, &two);
        if (one == 0 && two == 0) break;
        else if (two % one == 0) printf("factor\n");
        else if (one % two == 0) printf("multiple\n");
        else printf("neither\n");
    }
}