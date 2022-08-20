#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    int len, cnt = 10;
    scanf("%s", arr);
    len = strlen(arr);
    for(int i = 1; i < len; i++) {
        if (arr[i - 1] == arr[i]) cnt += 5;
        else cnt += 10;
    }
    printf("%d", cnt);
}