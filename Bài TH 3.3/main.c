#include <stdio.h>
#include <stdlib.h>
//quanganh-me1-02-20200031
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	scanf("%f", &x);
	scanf("%f", &y);
	printf("%.6f\n", x*x+y*y);
	printf("%.6f\n", (x+y)*(x+y));
	printf("%.6f", (x-y)*(x-y)); 
}
