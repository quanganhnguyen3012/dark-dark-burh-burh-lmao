#include <stdio.h>
#include <stdlib.h>
//quanganh-me1-02-20200031
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	printf("%.6f", (a*b)+(a*b)*c/100);
}
