#include <stdio.h>

int i=1;
int *pi=&i;
char c='C';
char *pc=&c;

int main() {

	// void v;
	void *pv;
	pv=pc;
	pi=pc;
	// pi=(int*)pc;
	pi=pv;

	printf("sizeof(int) = %d\n", sizeof(int));
	// printf("sizeof(int) = %d\n", sizeof i);

	printf("sizeof(int*) = %d\n", sizeof(int*));
	// printf("sizeof(int*) = %d\n", sizeof pi);

	printf("sizeof(char) = %d\n", sizeof(char));
	// printf("sizeof(char) = %d\n", sizeof c);

	printf("sizeof(char*) = %d\n", sizeof(char*));
	// printf("sizeof(char*) = %d\n", sizeof pc);

	// printf("sizeof(void) = %d\n", sizeof(void)); // gcc interpretacija, kad lygu 1 - atsargiai!

	printf("sizeof(void*) = %d\n", sizeof(void*));
	// printf("sizeof(void*) = %d\n", sizeof pv);

	return 0;
}
