#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int a = (n2 % 100) % 10; // 일의 자리
    int b = (n2 % 100 - a) / 10; // 십의 자리
    int c = (n2 - b * 10 - a) / 100; // 백의 자리
    
    printf("%d\n", n1 * a);
    printf("%d\n", n1 * b);
    printf("%d\n", n1 * c);
    printf("%d", n1 * n2);
}