#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
	time_t timer = time(NULL);
	struct tm *t;
	t = localtime(&timer);
	int month = t->tm_mon + 1;
	if (month < 10) printf("%d-0%d-%d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
	else if (month >= 10) printf("%d-%d-%d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
}