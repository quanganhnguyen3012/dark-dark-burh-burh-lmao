#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	int n,*a;
	float sum1=0, sum2=0;
	int dem1=0, dem2=0;
	scanf("%d", &n);
	a=(int*)malloc(n*sizeof(int));
	int i;
	for(i=0; i<n; i++){
		scanf("%d", (a+i));
	}
	for(i=0; i<n; i++){
		if(*(a+i)<0){
		    sum1+=*(a+i);
		    dem1++;
		}
	}
	for(i=0; i<n; i++){
		if(*(a+i)>0){
		    sum2+=*(a+i);
		    dem2++;
	    }
	}
	if(dem1==0&&dem2!=n&&dem2!=0) printf("%f", sum2);
	if(dem2==0&&dem1!=n&&dem1!=0) printf("%.6f", (float)sum1/dem1);
	if(dem2==n) printf("Mang khong co so am %f", sum2);
	if(dem1==n) printf("%.6f Mang khong co so duong", (float)sum1/dem1);
	if(dem1!=0&&dem2!=0) printf("%.6f %f", (float)sum1/dem1, sum2);
	if(dem1==0&&dem2==0) printf("Mang khong co so am Mang khong co so duong");
}
