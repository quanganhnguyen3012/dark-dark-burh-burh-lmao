#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	float a,b;
	double c;
	scanf("%f%f", &a, &b);
	c=pow(b,6)+a*pow(b,5)+a*a*pow(b,4)+pow(a,3)*pow(b,3)+pow(a,4)*b*b+pow(a,5)*b+pow(a,6);
	printf("%.6lf", c);
}

