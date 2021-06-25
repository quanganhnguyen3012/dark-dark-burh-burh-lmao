#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	double a,b,c;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	printf("%.6lf", ((a+b+c)/(a*a+b*b+1))-fabs(a-c*cos(b)));
}
