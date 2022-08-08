#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int N, sum1 = 0;
		float sum2 = 0;
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			int C;
			float G;
			scanf("%d %f", &C, &G);
			sum1 = sum1 + C;
			sum2 = sum2 + C * G;
		}
		printf("%d %3.1f\n", sum1, sum2 / sum1);
	}
}