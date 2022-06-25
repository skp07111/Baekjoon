#include <stdio.h>

int main() {
	char S[100];
	gets(S);
	int len = strlen(S);
	int al[26], cnt[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		al[i] = -1;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < len; j++) {
			if (S[j] == i) {
				cnt[i - 97]++;
				if (cnt[i - 97] > 1) continue;
				al[i - 97] = j;
			}
		}
		printf("%d ", al[i - 97]);
	}
}