#include <stdio.h>

int main() {
    int n, c, a = 0, b = 1;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        if (i == 0) c = a;
        else if (i == 1) c = b;
        else {
            c = a + b;
            a = b;
            b = c;    
        }
    }
    printf("%d", c);
}