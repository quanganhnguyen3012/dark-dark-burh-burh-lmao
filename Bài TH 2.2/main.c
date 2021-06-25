#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,max;
	scanf("%f", &a);
	scanf("%f", &b);
	max=a;
	if(max<b) max=b;
	printf("%.2f", max);
	return 0; 
}
