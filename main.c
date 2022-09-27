#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, z;
	
	printf("input the second: ");
	scanf("%d",  &x);
	
	y = x/60;
	z = x%60;
	
	printf("the time is %d : %d", y, z);

	return 0;
}
