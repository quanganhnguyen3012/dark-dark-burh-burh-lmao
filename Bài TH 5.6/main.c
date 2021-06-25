#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]){
	char a[100];
	int i,j;
	scanf(" %[^\n]", a);
	while(a[0]==' '){
		for(i=0; i<strlen(a); i++){
			a[i]=a[i+1];
		}
	}
    for(i=0; i<strlen(a); i++){
		if(a[i]==' '&&a[i+1]==' '){
			for(j=i+1; j<strlen(a); j++){
			    a[j]=a[j+1];
		    }
		    i--;
		}
	}
	while(a[strlen(a)-1]==' '){
		a[strlen(a)-1]='\0';
	}
	int n=strlen(a);
	for(int i=0; i<n; i++){
        if(a[i]>=97&&a[i]<=122){
            a[i]=a[i]-32;
        }
    }
	printf("%s:%d", a,n);
}
