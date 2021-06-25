#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	int n,s,k;
	s=0;
	scanf("%d", &n);
	if(n<=0||n>=1000) printf("ERROR");
	else{
		while(n>0){
            k=n%10;
            n=n/10;
            s=s+k;
        }
        printf("%d", s);
	}
}}
