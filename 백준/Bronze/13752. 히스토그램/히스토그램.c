#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        int input;
        scanf("%d", &input);
        for (int j = 0; j < input; j++) printf("=");
        printf("\n");
    }
}