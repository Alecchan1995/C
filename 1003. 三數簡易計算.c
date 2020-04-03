#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,n3;
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("sum is %d\n",n1+n2+n3);
	printf("average is %.2f\n",(float)(n1+n2+n3)/3);
	printf("product is %d\n",n1*n2*n3);
	if(n2<n3&&n2<n1)
		n1=n2;
	else if(n3<n1&&n3<n2)
		n1=n3;
	printf("smallest is %d\n",n1);
	if(n1>n2&&n1>n3)
		n3=n1;
	else if(n2>n3&&n2>n1)
		n3=n2;
	printf("largest is %d",n3);
	return 0;
	
}
