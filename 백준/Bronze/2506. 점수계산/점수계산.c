#include <stdio.h>

int main() {
	int N, score[100] = { 0 }, result[100] = { 0 }, sum = 0, cnt = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		if (score[i] == 0) {
			cnt = 0;
			result[i] = cnt;
		}
		else result[i] = ++cnt;
	}
	for (int i = 0; i < N; i++) {
		sum += result[i];
	}
	printf("%d", sum);
}