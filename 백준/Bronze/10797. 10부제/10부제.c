#include <stdio.h>

int main() {
    int num, cnt = 0;
    scanf("%d", &num);
    for (int i = 0; i < 5; i++) {
        int input;
        scanf("%d", &input);
        if (input == num) cnt++;
    }
    printf("%d", cnt);
}