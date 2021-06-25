#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int UCLN(int a,int b){
	if(b==0) return a;
	else return UCLN(b, a%b);
}
int main(int argc, char *argv[]) {
	int a,b,UCM,BCNN;
	scanf("%d%d", &a, &b);
	if(a<=0||b<=0) printf("ERROR");
	else{
	    UCM=UCLN(a,b);
        BCNN=a*b/UCM;
		printf("%d\n%d",UCM,BCNN);
	}
}
