#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fun(int);
int main(int argc, char *argv[]) {
	int x;
	scanf("%d",&x);
	fun(x);
	return 0;
}

int fun(int x){
	int i,j,n;
	int check=1;
	for(i=2;i<x;i++) {
		if(x%i==0){
		 	printf("�L���O���\n");
			 n=x/i;
			 x=i;
			
			 check=0;
			 printf("�A��J���Ʀr�i�H�Q %d : %d ����",x,n); 
		}
	}
	if(check){
		printf("�L�O���"); 
	}
	
}
