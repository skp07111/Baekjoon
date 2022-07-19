#include <stdio.h>
#include <string.h>

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        char str[80];
        scanf("%s", str);
        int sum = 0, cnt = 0, len = strlen(str);
        for (int j = 0; j < len; j++) {
            if(str[j] == 'O') {
                ++cnt;
                sum = sum + cnt;
            }
            else if (str[j] == 'X') {
                cnt = 0;
                continue;
            }
        }
        printf("%d\n", sum);
    }
}