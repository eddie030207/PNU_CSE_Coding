#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


int count_distinct_values(int * values) {
	int i = 0, n = 0;
	while(values[i] != -1){
		i++;
		n++;
	}
	
	for(int k = 0; k < n; k++){
		for(int p = 0; p < k; p++){
			if(values[p] == values[k]){
				i--;
				break;
			}
		}
	}
	
	return i;
}


int * generate_numbers(int nnums) {
	int *pnum = (int *)malloc(sizeof(int)*(nnums+1));
	int *pcur = pnum;

	assert(pnum);	
	
	while (pcur < pnum + nnums) 
		*pcur++ = rand()/100000;
	
	*pcur = -1;
	
	return pnum;	
}
int main(void) {
	int test_values[] = { 1, 2, 1, 2, 1, 3, 4, 5, 4, 7, -1};
	int *rand_values = test_values;
	int test_case = 1;
	
	srand(10);		
	scanf("%d", &test_case);
	switch (test_case) {
		case 2 :
			rand_values = generate_numbers(100);
			break;
		case 3 :
			rand_values = generate_numbers(10000);
			break;		
		case 4 :
			rand_values = generate_numbers(30000);
			break;
		default :
			break;
	}
	printf("# of distinct values = %d\n", count_distinct_values(rand_values));
	
	if (test_case > 1)
		free(rand_values);

	return 0;
}
