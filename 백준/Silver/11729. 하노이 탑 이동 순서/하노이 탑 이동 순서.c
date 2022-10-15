#include <stdio.h>
#include <math.h>

void hanoi(int n, int from, int temp, int to)
{
	if (n == 1)
	{
		printf("%d %d\n", from, to);
	}
	else
	{
		hanoi(n - 1, from, to, temp);
		printf("%d %d\n", from, to);
		hanoi(n - 1, temp, from, to);
	}
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%.0f\n", pow(2, N) - 1);
	hanoi(N, 1, 2, 3);
}