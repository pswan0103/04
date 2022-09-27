#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	int A, B, C, D, E;
	
	printf("input two integers: ");
	scanf("%d %d", &x, &y);
	
	A = x + y;
	B = x - y;
	C = x*y;
	D = x/y;
	E = x%y;
	
	printf("+ result is %d\n", A);
	printf("- result is %d\n", B);
	printf("* result is %d\n", C);
	printf("/ result is %d\n", D);
	printf("%% result is %d", E);
	
	return 0;
}
