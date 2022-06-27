#include <stdio.h>

int main() {
	char arr[8][9];
	int count = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%s", &arr[i], sizeof(arr[i]));
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				if (arr[i][j] == 'F') count++;
			}
			else if (i % 2 != 0 && j % 2 != 0) {
				if (arr[i][j] == 'F') count++;
			}
		}
	}
	printf("%d", count);
}