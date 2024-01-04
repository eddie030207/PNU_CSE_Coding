#include <stdio.h> 
// Complete sum_of_3()
int sum_of_3(int b, int e) {
	int s, i;
	for (i=b; i <= e; i++)
		if (i%3==0)
			s += i;
	return s;
}

int main(void) {
	int b, e;

	scanf("%d%d", &b, &e);

	printf("sum == %d\n", sum_of_3(b, e));
	
	return 0;
}