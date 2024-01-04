#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define N_MAX 1000000

double urand(void) { 
	return (double)rand()/(RAND_MAX+1);
}

int main(void) 
{
	double monte_pi, x, y;
	int num_in=0, num_out=0;
	int n, i;

	srand(time(0));

	scanf("%d",&n);

	if(n > N_MAX) n = N_MAX;

	for (i=0; i<n; i++) {
		x = urand();
		y = urand();
		if((x*x + y*y) <= 1) num_in ++;
		else num_out++;
	}

	monte_pi =  (double) num_in / n * 4; 
	printf("Monte-Carlo PI = %.20f, (Number of Sample = %d)\n",monte_pi,n);
	return 0;
}