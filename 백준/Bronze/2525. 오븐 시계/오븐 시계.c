#include <stdio.h>

int main() {
	int h, m, t, s;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	s = m + t;

	while (s >= 60) {
		s = s - 60;
		h++;
	}
    
	if (h > 23) {
        h = h - 24;
    }

	printf("%d %d", h, s);
}