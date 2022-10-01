#include <stdio.h>

int main() {
    int arr[45];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= 45; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
	int num;
	scanf("%d", &num);
	printf("%d", arr[num]);
}