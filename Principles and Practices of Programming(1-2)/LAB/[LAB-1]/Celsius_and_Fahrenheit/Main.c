#include <stdio.h>
int main(void) {
	int nC, nF;

	printf("Enter Fahrenheit temperature: ");
	scanf("%d", &nF);

	nC = (5 * (nF - 32))/9;

	printf("%d degrees Fahrenheit is %d degrees Celsius.\n", nF, nC);

	return 0;
}
