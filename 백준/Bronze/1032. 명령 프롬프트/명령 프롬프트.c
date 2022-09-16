#include <stdio.h>
#include <string.h>

int main() {
	int N;
	scanf("%d", &N);
	int i = 0, len;
	char str[50];
	scanf("%s", str);
	if (N > 1) {
		for (i = 1; i < N; i++) {
			char arr[50];
			scanf("%s", arr);
			len = strlen(arr);
			for (int j = 0; j < len; j++) {
				if (str[j] != arr[j]) str[j] = '?';
			}
		}
	}
	printf("%s", str);
}