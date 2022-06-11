#include <stdio.h>

int main() {
	int N, n, min, max;
	int arr[1000000] = {0};

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		arr[i] = n;
	}
    
    min = arr[0];
	max = arr[0];
    for (int i = 0; i < N; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		else if (arr[i] > max) {
			max = arr[i];
		}
    }
    
	printf("%d %d", min, max);
}