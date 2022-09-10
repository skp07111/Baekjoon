#include <stdio.h>

int main() {
	int num, arr[5], cnt = 0;
	scanf("%d", &num);
	arr[0] = num / 10000;
	arr[1] = num / 1000 % 10;
	arr[2] = num / 100 % 10;
	arr[3] = num / 10 % 10;
	arr[4] = num % 10;
	for (int i = 0; i < 5; i++) {
		int mul = 1;
		for (int j = 0; j < 5; j++) {
			mul *= arr[i];
		}
		cnt = cnt + mul;
	}
	printf("%d", cnt);
}