#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char str[1000];
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int len;
        scanf("%s", str);
        len = strlen(str);
        printf("%c%c\n", str[0], str[len-1]);
    }
}