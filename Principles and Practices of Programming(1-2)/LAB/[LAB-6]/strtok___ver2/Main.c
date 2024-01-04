#include <stdio.h>

int find_delim(char *psave, char *delim){
	for(int i = 0; *(delim + i); i++){
		if(*psave == *(delim + i)) return 1;
	}
	return 0;
}

char *mystrtok(char *str, char *delim) {
	static char *psave = 0;
	
	if(str) psave = str;
	if(*psave == '\0') return 0;
	int len = 0;
	
	while(find_delim(psave, delim)) psave++;
	
	while(*psave){
		if(find_delim(psave, delim)){
			*psave = '\0';
			return psave++ - len;
		}
		len++;
		psave++;
	}
	return psave - len;
}

int main(void) {
	char *pstr, *ptoken, *delim;
	int test = 0;

	char test_str[][256] = { "T1,T2 T3, T4  ,T5,,",", ",
		"abc\t  x\ny  z\n\nk", " \t\n",
		"#include <stdio.h>\nint\tmain(void){ int x=3;","# <>\n\t(){}=;"};
	
	scanf("%d", &test);
	if (test > 2 || test < 0) test = 0;
	pstr = test_str[2*test];
	delim = test_str[2*test+1];

	ptoken = mystrtok(pstr, delim);
	
	while (ptoken) {
		printf("%s\n",ptoken);
		ptoken = mystrtok(0, delim);		
	}
		
	return 0;
}