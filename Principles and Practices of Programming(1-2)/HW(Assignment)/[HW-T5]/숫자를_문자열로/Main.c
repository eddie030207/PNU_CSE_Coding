#include <stdio.h> 
//숫자를 문자열로 변환해주는 코드
int main(void)
{
	int i;		// index

	unsigned int num=0;	// number
	unsigned int nd, len;
	char str[11];       // Max Digits + 1
	char rstr[11];      // Max Digits + 1

	scanf("%d",&num);
 
	sprintf(str, "%d", num); //str에 num에 저장된 숫자를 문자열로 저장해라
	printf("%d is [%s]\n",num, str);
	return 0;
}
