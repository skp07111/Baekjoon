#include <stdio.h>

int main() {
    int N, arr[1000] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int temp, cnt, idx;
    for (int i = 0; i < N; i++) {
        cnt = arr[i];
        idx = i;
        for (int j = i + 1; j < N; j++) {
            if (cnt > arr[j]) {
                cnt = arr[j];
                idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
}