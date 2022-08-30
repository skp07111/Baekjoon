#include <stdio.h>

int main() {
	int arr[1001], i = 1, cnt = 1;
	arr[0] = 0;
	for (int num = 1; ; num++) {
		cnt = cnt + num;
		while (i != cnt) {
			arr[i] = num;
			i++;
			if (i == 1001) break;
		}
		if (i == 1001) break;
	}

	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	for (int k = a; k <= b; k++) {
		sum += arr[k];
	}
	printf("%d", sum);
}