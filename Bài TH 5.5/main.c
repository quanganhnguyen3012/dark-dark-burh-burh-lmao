#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//quanganh-me1-02-20200031
int main(int argc, char *argv[]) {
    char S[100], T[100], check[200];
    int i,j,convert,dem=1;
    int cout[200];
    scanf("%s%s", &S, &T);
    int lengthS=strlen(S);
    int lengthT=strlen(T);
    check[0]=S[0];
    for(i=0; i<lengthS; i++){
    	int test=0;
    	for(j=0; j<dem; j++){
    		if(S[i]==check[j]){
    			test=1;
    			break;
			}
		}
		if(test==0){
			check[dem]=S[i];
    		dem++;
		}
	}
	for(i=0; i<lengthT; i++){
    	int test=0;
    	for(j=0; j<dem; j++){
    		if(T[i]==check[j]){
    			test=1;
    			break;
			}
		}
		if(test==0){
			check[dem]=T[i];
    		dem++;
		}
	}
	for(i=0; i<dem-1; i++){
		for(j=i+1; j<dem; j++){
			if(check[j]<check[i]){
				convert=check[j];
				check[j]=check[i];
				check[i]=convert;
			}
		}
	}
	for(i=0; i<dem; i++){
		printf("%c", check[i]);
	}
	for(i=0; i<dem; i++){
		int dem1=0;
		for(j=0; j<lengthS; j++){
			if(S[j]==check[i]) dem1++;
		}
		for(j=0; j<lengthT; j++){
			if(T[j]==check[i]) dem1++;
		}
		cout[i]=dem1;
	}
	for(i=0; i<dem; i++){
		printf("\n%d", cout[i]);
	}
}
