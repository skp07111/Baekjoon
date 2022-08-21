#include <stdio.h>

int main() {
    for (int k = 0; k < 3; k++) {
        int y, cnt = 0;
        for(int i = 0; i < 4; i++) {
            scanf("%d", &y);
            if(y == 1) cnt++;
        }
        if (cnt == 0) printf("D\n");
        else if (cnt == 1) printf("C\n");
        else if (cnt == 2) printf("B\n");
        else if (cnt == 3) printf("A\n");
        else printf("E\n");
    }
}