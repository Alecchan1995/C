#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double n1,n2,a,b,c,d;
    printf("請輸入兩個數字"); 
	scanf("%lf%lf",&n1,&n2);
	a=n1+n2;
	b=n1-n2;
	c=n1*n2;
	d=n1/n2;
    printf("%.2lf+%.2lf=%.2lf\n",n1,n2,a);
    printf("%.2lf-%.2lf=%.2lf\n",n1,n2,b);
    printf("%.2lf*%.2lf=%.2lf\n",n1,n2,c);
    printf("%.2lf/%.2lf=%.2lf\n",n1,n2,d);
    
    system("pause");
    
	return 0;
}
