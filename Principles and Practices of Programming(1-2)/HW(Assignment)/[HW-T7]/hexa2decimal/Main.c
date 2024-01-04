#include <stdio.h> 
int hexa2decimal(char hexa_str[]) {

	int num = 0;
	for(int i = 2; hexa_str[i] != '\0'; i++){
		if('0' <= hexa_str[i] && hexa_str[i] <= '9') num = num * 16 + (hexa_str[i] - '0');
		else num = num * 16 + (hexa_str[i] - 55);
	}
	return num;
}

int main(void) {
	char hexa1[] = "0x1F34";
	char hexa2[] = "0x34CD56";
	char hexa3[] = "0x34FD5A";	

	printf("%s = %d\n", hexa1, hexa2decimal(hexa1));
	printf("%s = %d\n", hexa2, hexa2decimal(hexa2));
	printf("%s = %d\n", hexa3, hexa2decimal(hexa3));

	return 0;
}