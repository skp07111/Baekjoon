#include <stdio.h>
#include <string.h>

int main() {
	char str[255];
	while (1) {
		int cnt = 0;
		scanf("%[^\n]s", &str);
		getchar();
		int len = strlen(str);
		for (int i = 0; i < len; i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
				cnt++;
			}
			else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
				cnt++;
			}
		}
		if (str[0] == '#') break;
		printf("%d\n", cnt);
	}
}