#include <stdio.h>
//문자열로 저장된 값을 숫자로 환산해주는 코드
int main(void)
{
	char str[11];
	unsigned int num=0;	// number
	int i; // index

	scanf("%s",str);

	for(i=0; str[i]; i++) {
	num = (num * 10) + (str[i] - 48);
	}

	printf("[%s] is %d\n",str,num);
	
	return 0;
}