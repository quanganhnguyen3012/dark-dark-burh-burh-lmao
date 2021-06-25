#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
float S1(int n, float x){
	float S=0;
	int i;
	for(i=1; i<=n; i++){
		S=sqrt(x+S);
	}
	return S;
}
float S2(int n, float x){
	float S=1;
	int i;
	for(i=1; i<=n; i++){
		S=S+pow(x,i)/i;
	}
	return S;
}
float Luythua(int n){
	float S=1;
	int i;
	for(i=2; i<=n; i++){
		S=S*i;
	}
	return S;
}
float S3(int n, float x){
	float S=1;
	int i;
	for(i=1; i<=n; i++){
		S=S+pow(x,i)/Luythua(i);
	}
	return S;
}
float S4(int n, float x){
	float S=1;
	int i;
	for(i=1; i<=n; i++){
		S=S+pow((-1),i)*pow(x,i)/Luythua(i);
	}
	return S;
} 
int main(int argc, char *argv[]) {
	int n;
	float x;
	scanf("%f%d",&x,&n);
	if(n<1||x<0) printf("Error");
	else{
	    printf("%.4f", S1(n,x));
	    printf("\n%.4f", S2(n,x));
	    printf("\n%.4f", S3(n,x));
	    printf("\n%.4f", S4(n,x));
    }
}
