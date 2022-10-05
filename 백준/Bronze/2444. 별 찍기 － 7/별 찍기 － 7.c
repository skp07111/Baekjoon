#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int j = 1; j <= N; j++) {
		for (int i = j; i <= N - 1; i++) printf(" ");
		for (int k = 1; k <= 2 * j - 1; k++) printf("*");
		printf("\n");
	}
	for (int j = 1; j <= N; j++) {
		for (int i = 1; i <= j; i++) printf(" ");
		for (int k = j; k <= 2 * N - j - 2; k++) printf("*");
		printf("\n");
	}
}