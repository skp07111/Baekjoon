#include <stdio.h>
#include <string.h>

int main() {
	char small[26], big[26];
	int arr[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		small[i] = i + 97;
		big[i] = i + 65;
	}
	char str[1000000];
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 26; j++) {
			if (str[i] == small[j] || str[i] == big[j]) arr[j]++;
		}
	}
	int max = 0, cnt = 0, index = 0;
	for (int i = 0; i < 26; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) cnt++;
	}
	if (cnt != 1) printf("?");
	else printf("%c", big[index]);
}