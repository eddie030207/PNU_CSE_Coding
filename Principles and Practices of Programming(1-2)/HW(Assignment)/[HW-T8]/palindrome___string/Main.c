#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int ispalindrome(char *str) {
	
	int n = strlen(str), ans = 1;
	int len = n / 2;
	for(int i = 0; i < n; i++){
		if('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	}
	for(int i = 0, k = n - 1; i < len; i++, k--){
		if((isalnum(str[i]) == 0) && (isalpha(str[k]) != 0 || isdigit(str[k]) != 0)){
			k++;
			len++;
		}
		else if((isalpha(str[i]) != 0 || isdigit(str[i]) != 0) && isalnum(str[k]) == 0) i--;
		else if(str[i] != str[k]){
			ans = 0;
			break;
		}
	}
	return ans;
}
int main(void) {
	char buffer[1024];

	gets(buffer);
	printf("[%s] is ", buffer);
	if (ispalindrome(buffer)) puts("a palindrome");
	else puts("not a palindrome");
	
	return 0;
}