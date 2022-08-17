#include <stdio.h>

int main() {
	int A, B, C, num = 1;
	scanf("%d %d %d", &A, &B, &C);
	if (B >= C) printf("-1");
    else {
        while (1) {
            if (num > A / (C - B)) break;
            else num++;
        }
	    printf("%d", num);
    }
}