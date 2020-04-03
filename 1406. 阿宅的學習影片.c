#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char l;
	int s,x=0,i;//+5-2 
	scanf(" %d%d",&l,&s);
	for(i=s;i<=l;i+5){
	    if(i!=i){
	    	s=+i;
	    	x++;
	    	if(s>i){
				s-=2;
				x++;
			}
		}
		if(i==i)
		break;
		}
		printf("%d",x) ;
	return 0;
}
