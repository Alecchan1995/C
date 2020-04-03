#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,y=0,n=0,o=0,l=20,k=0;
	char ans[l][10];
	char	a[]="yes";
	char	b[]="no";
	char	c[]="YES";
	char	d[]="NO";
	scanf(" %d",&l);
	fflush(stdin);
	for(i=0;i<l;i++){
		gets(ans[i]);
		}
	for(i=0;i<l;i++){
		if(strcmp(ans[i],a)==0||strcmp(ans[i],b)==0)
			y++;
		//	printf("%d\n",y);}
		else if(strcmp(ans[i],c)==0||strcmp(ans[i],d)==0)
			n++;
		else
			o++;
		} 
		printf("%d %d %d",y,n,o);
	return 0;
}

