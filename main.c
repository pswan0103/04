#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input the second: ");
	scanf("%d",  &x);
	
	printf("the time is %d : %d", (int)x/60, (int)x%60);
	return 0;
}
