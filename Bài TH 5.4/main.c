#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
	char a[100];
	int n,i;
	gets(a);
	scanf("%d", &n);
	int length=strlen(a);
	if(length<=n) printf("%s", a);
	else{
		for(i=0; i<n; i++){
			printf("%c", a[i]);
		}
	}
}

