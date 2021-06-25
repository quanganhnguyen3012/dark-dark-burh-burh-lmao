#include <stdio.h>
//quanganh-me1-02-20200031
#define PI 3.14159
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double r;
	//const float pi=3.14159;
	//printf("Nhap vao ban kinh:");
	scanf("%lf", &r);
	if(r<=0){
	    printf("ERROR");
	}
	else {
	    printf("%1.6lf", 2*PI*r);
	    printf("\n%1.6lf", r*r*PI);
    }
    return 0;
}
