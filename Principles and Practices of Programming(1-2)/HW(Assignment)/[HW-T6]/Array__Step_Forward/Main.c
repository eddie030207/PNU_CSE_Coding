#include <stdio.h> 

int main(void)
{
	int a[10]={11,22,33,44,55};
	int i, j, n=5;

	scanf("%d", &j);
if (1 > j && 5 < j) n = 4;
for(i = j; i <= n ; i++){
	a[i-1] = a[i];
}
n = n - 1;
	for(i=0;i<n;++i) 
		printf("%d ", a[i]);
	printf("\n");
	
	return 0;
}