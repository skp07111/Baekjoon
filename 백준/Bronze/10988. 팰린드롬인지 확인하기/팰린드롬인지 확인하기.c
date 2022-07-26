#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, cnt = 0;

    scanf("%s", str);
    len = strlen(str);

    for (int i = len - 1; i >= 0; i--) {
        if (str[(len - 1) - i] != str[i]) cnt++;
    }

    if (cnt != 0) printf("0");
    else printf("1");
}