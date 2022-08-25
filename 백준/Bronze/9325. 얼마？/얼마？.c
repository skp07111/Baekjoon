#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int price, cnt = 0;
		scanf("%d", &price);
		cnt += price;
		int option;
		scanf("%d", &option);
		for (int j = 0; j < option; j++) {
			int opt_num, opt_pri;
			scanf("%d %d", &opt_num, &opt_pri);
			cnt = cnt + opt_num * opt_pri;
		}
		printf("%d\n", cnt);
	}
}