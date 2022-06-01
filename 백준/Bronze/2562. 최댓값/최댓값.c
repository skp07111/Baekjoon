#include <stdio.h>

int main() {
	int array[9];
	int max = 0, index = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &array[i]);
		if (max < array[i]) {
			max = array[i];
			index = i;
		}
	}
	printf("%d \n", max);
	printf("%d", index + 1);
}