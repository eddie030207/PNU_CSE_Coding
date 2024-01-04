#include <stdio.h>
#include <string.h>
void pswap(char *x, char *y){
	char temp = *x;
	*x = *y;
	*y = temp;
}

void print_all_permutations(char *str) {
	static int index = 0;
	int str_len = strlen(str) - 1;
	
	if(index == str_len) printf("%s\n", str);
	
	else {
		for(int i = index; i <= str_len; i++){
			pswap((str + index), (str + i));
			index++;
			print_all_permutations(str);
			index--;
			pswap((str + index), (str + i));
		}
	}
}

int main(void) { 
	char str[256] = "ABC";

	print_all_permutations(str);
	return 0; 
} 