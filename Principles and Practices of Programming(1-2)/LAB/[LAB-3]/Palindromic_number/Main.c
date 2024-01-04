#include <stdio.h> 
/**
* @brief : determine whether n is a palindromic number or not 
* @return: 1 if n is a palindromic number, 0 otherwise
* @param : n - a non-negative integer to be checked
*/
int is_palindromic_number(unsigned int n) {
int reversed = 0, remainder, original = n;

while(n != 0){
	remainder = n % 10;
	reversed	= reversed * 10 + remainder;
	n /= 10;
}

	if (original == reversed) return 1;
	else return 0;
}

int main(void) {
	unsigned int num;
	
	scanf("%d",&num);
	
	if (is_palindromic_number(num))
		printf("is a palindromic number\n");
	else 
		printf("is not a palindromic number\n");

	return 0;
}