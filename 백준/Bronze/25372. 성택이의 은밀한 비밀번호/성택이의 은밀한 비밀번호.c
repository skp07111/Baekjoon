#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        char arr[20];
        scanf("%s", arr);
        int len = strlen(arr);
        if (len >= 6 && len <= 9) printf("yes\n");
        else printf("no\n");
    }
}