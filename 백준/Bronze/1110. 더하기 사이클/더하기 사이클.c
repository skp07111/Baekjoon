#include <stdio.h>

int main() {
	int num, N = 0;
	scanf("%d", &num);
	if (num < 10) {
		num = num * 10;
	}
	int first = num;
	do {
		int b = num % 10;
		int a = (num - b) / 10;
		int c = (a + b) % 10;
		num = b * 10 + c;
		N++;
	}while (first != num);
	printf("%d", N);
}