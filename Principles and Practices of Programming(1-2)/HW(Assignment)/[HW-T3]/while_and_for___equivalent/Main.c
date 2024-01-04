#include <stdio.h>

int main(void) {
	int a;

	for (a = 15; a>0; a = a-(a%3+1)) {

		printf("%d\n", a);
	}

	return 0;
}