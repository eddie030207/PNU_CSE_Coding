#include <stdio.h> 
void print_menu(void); // Function Declaration

int main(void) {
	double	in, out;
	int nchoice;
	int baserate = 1000;

	do {
		print_menu();
		scanf("%d",&nchoice);
		if (nchoice==0) 	break;
		switch (nchoice) {
case 1 :
printf("Current base exchange rate : %d\n", baserate);
printf("Enter the new base rate : ");
scanf("%d", &baserate);
break;
	
case 2 : 
printf("Enter the amount of KRW : ");
scanf("%lf", &in);
out = in / (double) baserate;
printf("%.lf(KRW) == %f(USD)\n", in, out);
break;

case 3 :
printf("Enter the amount of USD : ");
scanf("%lf", &in);
out = in * (double) baserate;
printf("%f(USD) == %.f(KRW)\n", in, out);
break;

default :
printf("wrong choice !\n");
		}
	} while (1);
	printf("bye bye\n");
	return 0;
}

void print_menu(void) {
	char szmenu1[] ="[1] Set the base KRW-USD exchange rate";
	char szmenu2[] ="[2] Convert [KRW] to [USD]";
	char szmenu3[] ="[3] Convert [USD] to [KRW]";
	char szmenu0[] ="[0] Exit Program";
	char szchoice[]="Enter your choice : ";

	printf("%s\n%s\n%s\n%s\n%s",szmenu1,szmenu2, szmenu3,szmenu0,szchoice);
}
