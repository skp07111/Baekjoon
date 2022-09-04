#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int arr[7], sum = 0, min = 100;
        for (int i = 0; i < 7; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                sum += arr[i];
                if (arr[i] < min) min = arr[i];
            }
        }
        printf("%d %d\n", sum, min);
    }
}