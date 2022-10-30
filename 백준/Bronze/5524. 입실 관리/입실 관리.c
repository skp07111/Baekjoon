#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        char si[20];
        scanf("%s", si);
        int len = strlen(si);
        for (int j = 0; j < len; j++) {
            if (si[j] < 91) si[j] = si[j] + 32;
        }
        printf("%s\n", si);
    }
}