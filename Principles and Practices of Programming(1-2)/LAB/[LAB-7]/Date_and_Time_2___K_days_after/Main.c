#include <stdio.h>
#include <time.h>
void print_local_time_after_kdays(time_t t, int k) {
	
	t += k * 86400;
	struct tm * pnow;
	pnow = localtime(&t);
	
	if(pnow){
		printf("%d/%d/%d, %02d:%02d:%02d, ", pnow->tm_year + 1900, pnow->tm_mon + 1, pnow->tm_mday, pnow->tm_hour, pnow->tm_min, pnow->tm_sec);
		
		switch(pnow->tm_wday){
			case 0 : puts("Sunday"); break;
			case 1 : puts("Monday"); break;
			case 2 : puts("Tuesday"); break;
			case 3 : puts("Wednesday"); break;
			case 4 : puts("Thursday"); break;
			case 5 : puts("Friday"); break;
			case 6 : puts("Saturday"); break;
			default : break;
		}
	}
	return;
}
int main(void) {
	int k=0;
	time_t now = 1669856792; // 2022/12/01 01:06:32
	
	scanf("%d", &k);
	
	print_local_time_after_kdays(now, k);

	return 0;
}