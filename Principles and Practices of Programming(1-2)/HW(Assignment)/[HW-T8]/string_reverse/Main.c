#include <stdio.h>

char * mystrrev(char * str) {
	int len = 0, temp;
	char *dest = str;
	while(*dest){
		*dest++;
		len++;
	}
	for(int i = 0; i < len / 2; i++) {
		temp = str[i];
		str[i] = str[len -i -1];
		str[len -i -1] = temp;
	}
	return str;
}

int main(void) {
	char str[256];
	
	gets(str);
	
	printf("%-20s  : After Reverse >>>\n",str);
	printf("%-20s\n", mystrrev(str));

	return 0;
}