#include <stdio.h>
#include <stdlib.h>
//quanganh-me1-02-20200031
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,tong,TB;
	printf("Nhap vao diem toan:");
	scanf("%f", &a);
	printf("Nhap vao diem ly:");
	scanf("%f", &b);
	printf("Nhap vao diem hoa:");
	scanf("%f", &c);
	printf("%f", a+b+c);
	printf("\n%f", (a+b+c)/3);
}
