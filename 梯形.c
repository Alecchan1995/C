#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int top;
	int rand;
	int high;
	float answer;
	
	 scanf("%d%d%d\n",&top,&rand,&high); 
	 	answer= ((top+rand)*high)/2;
	 printf("%.1f",answer);
	return 0;
}
