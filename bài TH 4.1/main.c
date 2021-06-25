#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	int a,i;
	int b=1;
	scanf("%d", &a);
	if(a==0||a==1||a==2||a==3||a==4||a==5||a==6||a==7){
		for(i=1; i<=a; i++){
			b=b*i;
		}
		printf("%d", b);
	}
	else printf("ERROR");
}
