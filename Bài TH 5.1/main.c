#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	int n,*a;
	scanf("%d",&n);
	if(n<=0) printf("Error");
	else{
		a=(int*)malloc(n*sizeof(int));
		int i,sum=0;
		for(i=0; i<n; i++){
			scanf("%d", (a+i));
			sum+=*(a+i);
		}
		for(i=n-1; i>=0; i--){
			printf("%d ", *(a+i));
		}
		printf("\n%d", sum);
	}
}
