#include <stdio.h>
#include <string.h>

int main() {
    while(1) { 
        char str[99999];
        int len, cnt = 0;
        
        scanf("%s", str);
        len = strlen(str);
        if (str[0] == '0') break;
        
        for (int i = len - 1; i >= 0; i--) {
            if (str[(len - 1) - i] != str[i]) cnt++;
        }
        
        if (cnt != 0) printf("no\n");
        else printf("yes\n");
    }
}