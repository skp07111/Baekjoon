#include <stdio.h>
#include <string.h>

int main() {
    char str[15];
    int num = 0, len = 0;
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 65 && str[i] <= 67) {
            num = num + 3;
        } else if (str[i] >= 68 && str[i] <= 70) {
            num = num + 4;
        } else if (str[i] >= 71 && str[i] <= 73) {
            num = num + 5;
        } else if (str[i] >= 74 && str[i] <= 76) {
            num = num + 6;
        } else if (str[i] >= 77 && str[i] <= 79) {
            num = num + 7;
        } else if (str[i] >= 80 && str[i] <= 83) {
            num = num + 8;
        } else if (str[i] >= 84 && str[i] <= 86) {
            num = num + 9;
        } else if (str[i] >= 87 && str[i] <= 90) {
            num = num + 10;
        }
    }
    printf("%d", num);
}