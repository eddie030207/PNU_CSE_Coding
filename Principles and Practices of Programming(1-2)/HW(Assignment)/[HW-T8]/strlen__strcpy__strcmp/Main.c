#include <stdio.h>

int mystrlen(char *str) {

	int len = 0;
	while(*str){
		len++;
		*str++;
	}
	
	return len;
}

char *mystrcpy(char *dest, char *src) {
	
	char *a = dest;
	while(*src)
		*dest++ = *src++;
	*dest = '\0';
	return a;
}

int mystrcmp(char *lhs, char *rhs) {
	
	char *s1 = lhs;
	char *s2 = rhs;
	if(s1 == s2) return 0;
	
	while(*rhs){
		if(*lhs == *rhs){
			lhs++;
			rhs++;
		}
		else if(*lhs < *rhs) return -1;
		else return 1;
	}
}


int main(void) {
	char str1[256] = "Hello World !!!\n Good Day !!!";
	char str2[256] = "Hello PNU CSE !!!";
	char str3[256];
	
	printf("mystrlen(str1) = %d, mystrlen(str2) = %d\n",
				mystrlen(str1), mystrlen(str2));
	
	printf("mystrcpy(str3,str1) = %s\n", mystrcpy(str3,str1));
	
	printf("mystrcmp(str1,str3) = %d, mystrcmp(str2,str3) = %d", 
				mystrcmp(str1,str3), mystrcmp(str2,str3));
	
	return 0;
}