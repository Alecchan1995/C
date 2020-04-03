#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,n,sum=0,total,i;
	scanf("%d%d%d",&n,&x,&sum);
	printf("%d",n);
	total=n;
	for(i=n;i<=sum;i++){
		total+=x;
		printf(" + %d ",total); 
	}
	printf("=%d",total);
	return 0;
}
