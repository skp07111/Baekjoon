#include <stdio.h>

int main() {
	int N;
	char str[30];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf(" %[^\n]s", str);
		if ('a' <= str[0] && str[0] <= 'z') {
			str[0] -= 32;
		}
		printf("%s", str);
		printf("\n");
	}
}