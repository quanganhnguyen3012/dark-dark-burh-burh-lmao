#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	int a,b,i,check;
	check=0;
	scanf("%d", &a);
	if(a<=1){
		check=1;
	    goto A;
    }
	b=sqrt(a);
	for(i=2; i<=b; i++){
		if(a%i==0){
			check=1;
			break;
		}
	}
	A: if(check==0) printf("La so nguyen to");
	else printf("Khong phai so nguyen to");
}
