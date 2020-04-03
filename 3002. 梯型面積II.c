#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	float x;
	scanf(" %d%d%d",&a,&b,&c);
	x=((float)a+b)*c/2;
	printf("%.1f",x);
	return 0;
}
