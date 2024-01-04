#include <stdio.h>

char *mystrcat(char *dest, char *src) {
	char *psave = dest;
	while(*dest) *dest++;
	while(*src) *dest++ = *src++;
	return psave;
}

int main(void) {
	char str[256] = "Hello ";
	char * pstr2 = "Good Bye World !!!";
	
	printf("%s\n", mystrcat(mystrcat(str, " World !!! ..."), pstr2 ));

	return 0;
}