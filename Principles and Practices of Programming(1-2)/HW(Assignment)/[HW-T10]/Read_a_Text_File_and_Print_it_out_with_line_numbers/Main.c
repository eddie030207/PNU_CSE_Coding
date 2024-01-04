#include <stdio.h>

int main(void) {
	char *filename = "data/stdint-wrap.h";
	FILE *fp = NULL;
	char buf[256];
	int line_number = 1;
	
	fp = fopen("data/stdint-wrap.h", "r");
	while(fgets(buf, sizeof(buf), fp) != NULL){
		printf("%2d : %s", line_number, buf);
		line_number++;
	}

	fclose(fp);
	
	return 0;	
}
