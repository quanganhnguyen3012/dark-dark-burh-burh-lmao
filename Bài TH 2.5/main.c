#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,tong;
    printf("Nhap a:");
	scanf("%d",&a);
    printf("Nhap b:");
	scanf("%d",&b);
    printf("Nhap c:");
	scanf("%d",&c);
    tong=a+b+c;
    printf("%d", tong);
    printf("\n%f", (float)tong/3);
    return 0;
}
