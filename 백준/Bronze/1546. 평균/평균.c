#include <stdio.h>

int main() {
	int n, M = 0;
	double sum = 0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	double mod[1000] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (M < arr[i]) M = arr[i];
	}
	for (int i = 0; i < n; i++) {
		mod[i] =  ((double) arr[i] / M) * 100;
		sum += mod[i];
	}
	printf("%f", sum/(double )n);
}