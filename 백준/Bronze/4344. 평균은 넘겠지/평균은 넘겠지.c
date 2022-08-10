#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int stu, sum = 0, arr[1000] = { 0 };
        float cnt = 0;
		scanf("%d", &stu);
		for (int j = 0; j < stu; j++) {
			int score;
			scanf("%d", &score);
			arr[j] = score;
			sum += score;
		}
		for (int k = 0; k < stu; k++) {
			if (arr[k] > (sum / stu)) {
				cnt++;
			}
		}
		printf("%.3f%%", cnt / stu*100);
        printf("\n");
	}
}