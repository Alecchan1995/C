#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,i;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
		printf("%d",i);
	for(i=x-1;i>=1;i--)
		printf("%d",i);
	return 0;
}
