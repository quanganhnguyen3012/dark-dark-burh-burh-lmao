#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		if(b==0&&c==0) printf("Phuong trinh vo so nghiem");
		if(b==0&&c!=0) printf("Phuong trinh vo nghiem");
		if(b!=0){
			printf("%.6f",-c/b);
		}
	}
	else{
		float Delta;
		Delta=b*b-4*a*c;
		if(Delta>0){
			printf("%.6f", (-b+sqrt(Delta))/(2*a));
			printf("\n%.6f", (-b-sqrt(Delta))/(2*a));
		}
		if(Delta==0){
			printf("%.6f", -b/(2*a));
		}
		if(Delta<0){
			float Delta2;
			Delta2=-Delta;
			printf("%.6f+%.6fi", -b/(2*a), sqrt(Delta2)/(2*a));
			printf("\n%.6f-%.6fi", -b/(2*a), sqrt(Delta2)/(2*a));
		}
	}
}

