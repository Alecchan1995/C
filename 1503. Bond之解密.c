#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m=0,n=0,i,j,a,b;
	char ans[10],st[10];
	gets(st);
	while (m<4){
		m=0;
		n=0;
		gets(ans);
		a= strlen(ans);
		b= strlen(st);
		for(i=0;i<4;i++){
			if(strlen(a)==strlen(b))
				m++;
			else{
				for(j=0;j<i;j++){
					if(strlen(a)==strlen(st))					n++;
				}
		}
	}
		printf("%dA%dB",m,n);
}
	return 0;
}
