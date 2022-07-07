#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int num, len;
        char S[20];
        scanf("%d ", &num);
        scanf("%s", S);
        len = strlen(S);
        for (int j = 0; j < len; j++) {
            for (int k = 0; k < num; k++) {
                printf("%c", S[j]);
            }            
        }
        printf("\n");
    }
}