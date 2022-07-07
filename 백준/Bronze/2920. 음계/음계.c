#include <stdio.h>

int main() {
    int da[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int str[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &str[i]);
    }
    int cnt1 = 0, cnt2 = 0;
    for (int j = 0; j < 8; j++) {
        if (da[j] != str[j]) {
            cnt1++;
        }
        if (da[j] != str[7-j]) {
            cnt2++;
        }
    }
    if (cnt1 == 0 || cnt2 == 0) {
        if (str[7] == 8) printf("ascending");
        else if (str[7] == 1) printf("descending");
    }
    else printf("mixed");
}