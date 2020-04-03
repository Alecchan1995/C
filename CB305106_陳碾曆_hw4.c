#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char inp[4],ans[4];
	int a=0,b=0,i,j;
	gets(ans);
	while(a!=4){ 
	a=0;
	b=0;
	gets(inp);
	for(i=0;i<4;i++){
		if(ans[i]==inp[i]){
		a++;
		}
		for(j=0;j<4;j++) {            // 1234 1324
			if(ans[i]==inp[i]){
				b++;
	    	}
		}
	}
	printf("%dA%dB",a,b); 
	} 
	return 0;
}
