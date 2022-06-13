#include <stdio.h>

int main() {
	int n1, n2, n3, award, max;
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 == n2 && n2 == n3) {
		award = 10000 + n1 * 1000;
	}
	else if (n1 == n2 || n1 == n3) {
		award = 1000 + n1 * 100;
	} 
	else if (n2 == n3) {
		award = 1000 + n2 * 100;
	}
	else {
		max = n1;
		if (max < n2) {
			max = n2;
		}
		if (max < n3) {
			max = n3;
		}
		award = max * 100;
	}
	printf("%d", award);
}