#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, z, m;
	
	printf("input the number: ");
	scanf("%d", &x);
	
	y = x/3600;
	z = (x%3600)/60;
	m = x%60;
	
	printf("The time for %d second is %d : %d : %d", x, y, z, m);
	return 0;
}
