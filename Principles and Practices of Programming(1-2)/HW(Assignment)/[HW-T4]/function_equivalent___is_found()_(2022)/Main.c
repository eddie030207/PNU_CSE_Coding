#include <stdio.h> 
// Complete is_found()
int is_found(int b, int e, int n) {
	int v;
	for (v = b; v <=e && !(n%v==0); v++);
	if (v <= e) return 1;
	else return 0;
}

int main(void) {
	int b,e,n;

	scanf("%d%d%d", &b,&e,&n);

	if (is_found(b,e,n))
		printf("found.\n");
	else
		printf("not found.\n");

	return 0;
}