#include <stdio.h>

int main() {
    int a, b, c;
    int arr[3];
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b) {
        if (a >= c) {
            arr[0] = a;
            if (b >= c) {
                arr[1] = b;
                arr[2] = c;
            }
            else {
                arr[1] = c;
                arr[2] = b;
            }
        }
        else {
            arr[0] = c;
            arr[1] = a;
            arr[2] = b;
        }
    }
    else {
        if (b >= c) {
            arr[0] = b;
            if (a >= c) {
                arr[1] = a;
                arr[2] = c;
            }
            else {
                arr[1] = c;
                arr[2] = a;
            }
        }
        else {
            arr[0] = c;
            arr[1] = b;
            arr[2] = a;
        }
    }
    printf("%d %d %d", arr[2], arr[1], arr[0]);
}