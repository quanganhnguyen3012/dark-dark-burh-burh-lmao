#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y, min;
    scanf("%f",&x);
    scanf("%f",&y);
    if(x<y) min=x;
    else min=y;
    printf("%.2f", min);
    return 0;
}
