#include <stdio.h>

typedef struct student {
    int id;
    char *pname;
    double points;
} STUD;

void stud_printx(STUD s) {
    printf("[%d:%s] = %lf\n", s.id, s.pname, s.points);
}
void stud_print(STUD *ps) {
	printf("[%d:%s] = %lf\n", (*ps).id, (*ps).pname, (*ps).points);
}

void stud_swap(STUD *s1, STUD *s2) {
	int temp = (*s1).id;
	(*s1).id = (*s2).id;
	(*s2).id = temp;
	
	char *temp2 = (*s1).pname;
	(*s1).pname = (*s2).pname;
	(*s2).pname = temp2;
	
	double temp3 = (*s1).points;
	(*s1).points = (*s2).points;
	(*s2).points = temp3;
}

int main(void) {
	STUD s1 = {1, "Choi", 9.9};
	STUD s2 = {2, "Park", 0.1};

	stud_printx(s1);
	stud_printx(s2);
	stud_swap(&s1, &s2);
	stud_print(&s1);
	stud_print(&s2);

	return 0;
}