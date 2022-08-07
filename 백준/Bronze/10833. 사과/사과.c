#include <stdio.h>

int main() {
    int num, cnt = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        int student, apple, rem;
        scanf("%d %d", &student, &apple);
        rem = apple % student;
        cnt = cnt + rem;
    }
    printf("%d", cnt);
}