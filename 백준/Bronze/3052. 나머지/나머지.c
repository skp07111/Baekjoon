int main() {
	int R = 0;
	int arr[10], cnt[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (i == j) continue;
			else if (arr[i] % 42 == arr[j] % 42) cnt[i]++;
		}
		if (cnt[i] == 0) R++;
	}
	printf("%d", R);
}