#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int k,total=0,i,n=100000;//n��limit 
	int x[n];
	scanf("%d\n%d",&n,&k);//��Jn�h�֦���,k�O�n�h�ֳ�	 
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	for(i=0;i<n;i++){
		if(x[i]>=k){
			printf("%d\n",x[i]);
			total+=k;
			
		}
	}
	printf("%d",total);
	return 0;
}
