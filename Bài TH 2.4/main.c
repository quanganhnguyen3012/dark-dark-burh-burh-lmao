#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y,max;
    scanf("%f",&x);
    scanf("%f",&y);
    if (x>y) max=x;
    else max=y;
    printf("%.2f", max);
    return 0;
}
