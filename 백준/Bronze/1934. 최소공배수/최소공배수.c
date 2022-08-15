#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int a, b, c = 1, cal;
		scanf("%d %d", &a, &b);
		if (a < b) {
			do {
				cal = b * c;
				c++;
			} while (cal % a != 0);
			printf("%d\n", cal);
		}
		else {
			do {
				cal = a * c;
				c++;
			} while (cal % b != 0);
			printf("%d\n", cal);
		}
	}
}