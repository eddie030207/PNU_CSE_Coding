#include <stdio.h>

char *mystrstr(char *str, char *substr) {
	
	char *s1, *sfin;
	if(*substr == 0) return str;
	while(*str){
		if(*str == *substr){
			s1 = str + 1;
			sfin = substr + 1;
			while(*sfin != 0 && *s1 != 0 && *sfin == *s1){
				s1++;
				sfin++;
			}
			if(*sfin == 0) return str;
			if(*s1 == 0) break;
		}
		str++;
	}
	return NULL;
}

void find_str(char * str, char * substr) {
	char* pos = mystrstr(str, substr);
	if(pos) 
		printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
	else
		printf("the string '%s' was not found in '%s'\n", substr, str);
}
 
int main(void) {
	char* str = "one two three";
	find_str(str, "two");
	find_str(str, "");
	find_str(str, "nine");
	find_str(str, "n");

	return 0;
}