#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("輸入一至一百的數字\n");
	scanf("%d",x);
	if(x>=90 && x<=100)
		{
	 	printf("4.3\nA+");	
		}	 
	else if(x>=85&&x<=89)
		{
		printf("4.0\nA");
		}
	else if(x>=80&&x<=84)
		{
		printf("3.7\nB+");
		}
	else if(x>=77&&x<=79)
		{
			printf("3.3\nB");
		}
	else if(x>=73&&x<=76)
		{
			printf("3.0\nC+");
		}
	else if(x>=70&&x<=72)
		{
			printf("2.7\nC");
		}
	else if(x>=67&&x<=69)
		{
			printf("2.3\nD+");
		}
		else if(x>=63&&x<=66)
		{
			printf("2.0\nD");
		}
		else if(x>=60&&x<=62)
		{
			printf("1.7\nE");
		}
		else
		{
			printf("0\nF");
		}
	
	return 0;
}
