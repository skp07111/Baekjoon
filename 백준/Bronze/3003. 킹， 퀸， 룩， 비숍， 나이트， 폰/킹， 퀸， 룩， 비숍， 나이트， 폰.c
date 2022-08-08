#include <stdio.h>

int main() {
    int arr[6], in[6];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 2;
    arr[4] = 2;
    arr[5] = 8;
    for (int i = 0; i < 6; i++) {
        scanf("%d ", &in[i]);
    }
    for (int i = 0; i < 6; i++) {
        arr[i] = arr[i] - in[i];
        printf("%d ", arr[i]);
    }
}