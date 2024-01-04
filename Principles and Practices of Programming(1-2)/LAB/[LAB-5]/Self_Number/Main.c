#include <stdio.h>
#define MAX_NUMBER	10000


int self(int n){
	int result = n;
	while(n > 0){
		result += n%10;
		n /= 10;
	}
	return result;
}
int main(void) {
	int arr[MAX_NUMBER] = {0, }, sum;
	for(int i = 1; i < MAX_NUMBER; i++){
		sum = self(i);
		if(sum < MAX_NUMBER) arr[sum] = 1;
	}
	for(int i = 1; i < MAX_NUMBER; i++)
		if(arr[i] == 0) printf("%d\n", i);
	return 0;
}
