#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    scanf("%s", word);
    int len = strlen(word);
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        cnt++;
    }
    printf("%d", cnt);
}