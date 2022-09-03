#include <stdio.h>
#include <time.h>

int main() {
	time_t timer = time(NULL);
	struct tm *t;
	t = localtime(&timer);
	int month = t->tm_mon + 1;
	if (month < 10) {
        printf("%d\n", t->tm_year + 1900);
        printf("0%d\n", t->tm_mon + 1);
        printf("%d\n", t->tm_mday);
    }
	else if (month >= 10) {
        printf("%d\n", t->tm_year + 1900);
        printf("%d\n", t->tm_mon + 1);
        printf("%d\n", t->tm_mday);
    }
}