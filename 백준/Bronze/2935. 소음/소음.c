#include <stdio.h>
#include <string.h>

int main() {
	char A[100], B[100], op;
	scanf("%s", A);
	scanf(" %c", &op);
	scanf("%s", B);
	int alen, blen;
	alen = strlen(A);
	blen = strlen(B);
	if (op == '+') {
		if (alen == blen) {
			A[0] = '2';
			printf("%s", A);
		}
		else if (alen > blen) {
			A[alen - blen] = '1';
			printf("%s", A);
		}
		else {
			B[blen - alen] = '1';
			printf("%s", B);
		}
	}
	else if (op == '*') {
		int zero = alen + blen - 2;
		A[0] = '1';
		for (int i = 1; i <= zero; i++) {
			A[i] = '0';
		}
        for (int i = 0; i < zero+1; i++) printf("%c", A[i]);
	}
}