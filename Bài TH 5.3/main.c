#include <stdio.h>
#include <stdlib.h>
//quanganh-me1-02-20200031
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Arrange(int *a, int n){
	int i,j,convert;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(*(a+j)<*(a+i)){
				convert=*(a+j);
				*(a+j)=*(a+i);
				*(a+i)=convert;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", *(a+i));
	}
}
int main(int argc, char *argv[]) {
	int n,*a;
	scanf("%d",&n);
	if(n<=0) printf("Error");
	else{
	    a=(int*)malloc(n*sizeof(int));
	    int i;
	    for(i=0; i<n; i++){
	    	scanf("%d", (a+i));
		}
		Arrange(a,n);
	}
}

