#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=100,n,y,size;
	char a[x],b[x];

		gets(a);
		gets(b);
	
		if(strcmp(a,b)<0){
			strcat(a,b);
			n = strlen(a);
			printf("1<2\n");
			printf("%s\n",a);
			printf("%d",n);
		
			} 
		else if(strcmp(a,b)>0){
			strcat(a,b);
			n = strlen(a);
			printf("1>2\n");
			printf("%s\n",a);
			printf("%d",n);	
			}
		else if(strcmp(a,b)==0){
			strcat(a,b);
			n = strlen(a);
			printf("1==2\n");
			printf("%s\n",a);
			printf("%d",n);	
			}
	return 0;
}
