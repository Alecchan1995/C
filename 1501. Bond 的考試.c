#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char n;
	gets(n);
	if( n%7==0 || n=='7')
		{
		printf("yes\n");
		}
	else{
		printf("No");}
	return 0;
}
